/*
    You may have to disable or bypass CORS altogether for this script to work.
    CORS can be disabled in Google Chrome using the --disable-web-security flag.
*/

async function unfollowAllArtists() {
    /* 
        Your spotify OAuth Token
        Required scopes : user-follow-modify, user-follow-read
        Can be obtained via : https://developer.spotify.com/console/get-following/
    */
    let spotifyOAuthToken = 'paste-your-oauth-token-here';
    
    let apiEndpoint = 'https://api.spotify.com/v1/me/following?type=artist&limit=50';
    let artistIDs = [];

    while (1) {
        let followedArtists = await fetch(apiEndpoint, {
            method: 'GET',
            headers: {
                'Accept': 'application/json',
                'Content-Type': 'application/json',
                'Authorization': 'Bearer ' + spotifyOAuthToken
            },
        })

        followedArtists = await followedArtists.json();

        if (!followedArtists['artists']) {
            console.log(followedArtists);
            break;
        }
        
        followedArtists = followedArtists['artists'];

        followedArtists['items'].forEach(function (artistID) {
            artistIDs.push(artistID['id']);
        });
        
        apiEndpoint = followedArtists['next'];
        if (!apiEndpoint) {
            break;
        }
    }

    let apiEndpointBase = 'https://api.spotify.com/v1/me/following?type=artist&ids=';

    for (let i = 0; i < artistIDs.length; i += 50){
        apiEndpoint = apiEndpointBase;
        for (let j = i; j < Math.min(i + 50, artistIDs.length); j++){
            apiEndpoint += (artistIDs[j] + ',');
        }
        apiEndpoint = apiEndpoint.slice(0, -1);

        await fetch(apiEndpoint, {
            method: 'DELETE',
            headers: {
                'Content-Type': 'application/json',
                'Authorization': 'Bearer ' + spotifyOAuthToken
            },
        });
    }
}
unfollowAllArtists();