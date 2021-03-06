#include <websites.h>

WebsiteInfo myspace_video = {
    "myspace-video",
    "^(?i)(https?://)?(\\w+\\.)?myspace\\.com/video/.*/(?<video_id>\\d+)([^\\w\\d][^/]*)?$",
    "<object width=\"425px\" height=\"360px\">"
        "<param name=\"allowFullScreen\" value=\"true\"/>"
        "<param name=\"wmode\" value=\"opaque\"/>"
        "<param name=\"movie\" value=\"http://mediaservices.myspace.com/services/media/embed.aspx/m=%VIDEO_ID%,t=1,mt=video\"/>"
        "<embed src=\"http://mediaservices.myspace.com/services/media/embed.aspx/m=%VIDEO_ID%,t=1,mt=video\" width=\"425\" height=\"360\" allowFullScreen=\"true\" type=\"application/x-shockwave-flash\" wmode=\"opaque\"></embed>"
        "</object>",
    NULL
};
