# UCL2015
UCL "Mind the Gut" 2015 iGEM Team

Welcome to the repository of our three different software tools produced this year!

Our two most prolific tools from the two above are the Mind-The-Mark and the Mind-The-Model tools as seen above. These have been moved from separate repositories into a singular repository here under the iGEM organization's umbrella. Hopefully this explains the rather poor push history. For more information on the development of these tools please see our igem <a href="2015.igem.org/Team:UCL">wiki</a>.

##Mind-The-Mark

Licensed under a full MIT License

Chrome Store: https://chrome.google.com/webstore/detail/mind-the-mark/jkagocihmkabhekcmdgiloihalnoliai?authuser=1

Our sublime text editor. A tool that optimizes the wiki text editor.
This is a Google Chrome extension that takes the bland text editor optimizes into a code editor with markup color.
Also it includes tag highlighting. Future updates include suggestion and css/js integrated coloring.

###How to get it going

First thing to do is to download the file from here, Github! If you just want to use this the only important file is the 
<b>.crx</b> file. Open chrome and go to settings and then the extensions page. The url should be something like Chrome://Extensions. 
<br>
Now drag the .crx file into that page and drop it. The page should then ask you if you want to install the extension. 
Click yes! From there you should be good to go. Make sure that the extension has permission to access your URL. The only reason it does this is because it looks for the iGEM URL to then act! Good luck and feel free to tweet, message, or email!

###Debugging

We have found that chrome arbitratily puts up errors when using the drag and drop method from github. A foolproof method so far seems to be to use the chrome store. Otherwise please feel free to tweet, message, or comment with problems.

###Further Development

The core of the work is located in the <b>script.js</b> file and is at the very bottom of the file around the 12,000 lines mark. This dictates how the code is applied to the page. Specifcally it identifes the id of the textarea on the iGEM page and then applies the convesion.

This can be cleaned up so that the content scripts on loads on the iGEM pages and then applies it to any textarea. Alternatively the scipt can be changed so that it targets any textarea. At this point it is six of one half-a-dozen of the other. 

