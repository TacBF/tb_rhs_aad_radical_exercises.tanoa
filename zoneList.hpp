#include "tb_defines.hpp"

zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },
	
	{ 1, TEAM_RED, 		    SPAWN_XRAY,     		{2,3}      				, {}    	, 1      , {}        			, 0    , "%X-Ray" },
	{ 2, TEAM_BLUE, 		SPAWN_NEVER,    		{4}						, {3}    	, 1      , {}        			, 0    , "%Alpha" },
	{ 3, TEAM_BLUE, 		SPAWN_NEVER,    		{4}      				, {2}   	, 1      , {}        			, 0    , "%Bravo" },	
	{ 4, TEAM_BLUE, 		SPAWN_NEVER,    		{5}  					, {}    	, 1      , {}        			, 0    , "%Charli" },	
	{ 5, TEAM_BLUE, 		SPAWN_NEVER,    		{6,7,8}      			, {}  		, 1      , {}        			, 0    , "%Delta" },
	{ 6, TEAM_BLUE, 		SPAWN_NEVER,    		{9}      				, {8,7}   	, 1      , {}        			, 0    , "%Echo" },
	{ 7, TEAM_BLUE, 		SPAWN_NEVER,    		{9}						, {6,8}    	, 1      , {}        			, 0    , "%Foxtrot" },
	{ 8, TEAM_BLUE, 		SPAWN_NEVER,    		{9}      				, {7,6}    	, 1      , {}		 			, 0    , "%Golf" },
	{ 9, TEAM_BLUE, 		SPAWN_NEVER,  			{10}					, {}    	, 1      , {}    	 			, 0    , "%Hotel" },
	{ 10, TEAM_BLUE,   	    SPAWN_NEVER,  			{11}					, {}    	, 1	     , {}    				, 0    , "%India" },
	{ 11, TEAM_BLUE,   	    SPAWN_NEVER,  			{12}					, {}    	, 1      , {}   	 			, 0    , "%Juliet" },
	{ 12, TEAM_BLUE, 		SPAWN_XRAY,    			{11}      				, {}    	, 1      , {}		 			, 0    , "%X-Ray" },
	{ 13, TEAM_BLUE, 		SPAWN_INSTANT,    		{}      				, {}    	, 1      , {11}		 			, 1    , "%Kilo" },
	{ 14, TEAM_BLUE, 		SPAWN_INSTANT,    		{}      				, {}    	, 1      , {12}		 			, 1    , "%Navy" },
};



