/*
#############################################################################################
# Special Force 2 (1.0.46397.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFGameContent_functions.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL, crylessdomore
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function SFGameContent.SFCItem_Sakura_Summer_DefSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Sakura_Summer_DefSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 137350 ];

	USFCItem_Sakura_Summer_DefSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_EagleEye_WhiteSuit.ApplyItemToHostPawn
// [0x00022000] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_EagleEye_WhiteSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 137410 ];

	USFCItem_EagleEye_WhiteSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Char_Face_Meiden.PostApplyItemInternal
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )
// unsigned long                  bUsePenalty                    ( CPF_Parm )

void USFCItem_Char_Face_Meiden::PostApplyItemInternal ( class AActor* AppliedActor, unsigned long bUsePenalty )
{
	static UFunction* pFnPostApplyItemInternal = NULL;

	if ( ! pFnPostApplyItemInternal )
		pFnPostApplyItemInternal = (UFunction*) UObject::GObjObjects()->Data[ 137478 ];

	USFCItem_Char_Face_Meiden_execPostApplyItemInternal_Parms PostApplyItemInternal_Parms;
	PostApplyItemInternal_Parms.AppliedActor = AppliedActor;
	PostApplyItemInternal_Parms.bUsePenalty = bUsePenalty;

	this->ProcessEvent ( pFnPostApplyItemInternal, &PostApplyItemInternal_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_WhiteNightSuit.ApplyItemToHostPawn
// [0x00022000] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_WhiteNightSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 137675 ];

	USFCItem_GIGN_WhiteNightSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_BlackMamba_BeachwearSuit.ApplyItemToHostPawn
// [0x00022000] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_BlackMamba_BeachwearSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 137788 ];

	USFCItem_BlackMamba_BeachwearSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCWeaponRIS_ActionCamo_Kill.OwnerKill
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFCWeaponRIS_ActionCamo_Kill::OwnerKill ( )
{
	static UFunction* pFnOwnerKill = NULL;

	if ( ! pFnOwnerKill )
		pFnOwnerKill = (UFunction*) UObject::GObjObjects()->Data[ 137812 ];

	USFCWeaponRIS_ActionCamo_Kill_execOwnerKill_Parms OwnerKill_Parms;

	this->ProcessEvent ( pFnOwnerKill, &OwnerKill_Parms, NULL );

	return OwnerKill_Parms.ReturnValue;
};

// Function SFGameContent.SFCitem_Common_Casino_Shoes.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCitem_Common_Casino_Shoes::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 137885 ];

	USFCitem_Common_Casino_Shoes_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Casino_Shirts.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Casino_Shirts::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 137891 ];

	USFCItem_Common_Casino_Shirts_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Bomber_Hat.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Bomber_Hat::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 137898 ];

	USFCItem_Common_Bomber_Hat_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_bomber_Jacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_bomber_Jacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 137904 ];

	USFCItem_Common_bomber_Jacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Bomber_Pants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Bomber_Pants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 137911 ];

	USFCItem_Common_Bomber_Pants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_RiotGear_Boots.ApplyItemToPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_RiotGear_Boots::ApplyItemToPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToPawn = NULL;

	if ( ! pFnApplyItemToPawn )
		pFnApplyItemToPawn = (UFunction*) UObject::GObjObjects()->Data[ 137933 ];

	USFCItem_Common_RiotGear_Boots_execApplyItemToPawn_Parms ApplyItemToPawn_Parms;
	ApplyItemToPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToPawn, &ApplyItemToPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_Colombiana_Pants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Colombiana_Pants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 137976 ];

	USFCItem_GIGN_Colombiana_Pants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Colombiana_Pants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Colombiana_Pants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 137973 ];

	USFCItem_Common_Colombiana_Pants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Colombiana_Boots.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Colombiana_Boots::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 137986 ];

	USFCItem_Common_Colombiana_Boots_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_Colombiana_Jacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Colombiana_Jacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 137996 ];

	USFCItem_GIGN_Colombiana_Jacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Colombiana_Jacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Colombiana_Jacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 137993 ];

	USFCItem_Common_Colombiana_Jacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_SFWCGear_Jacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_SFWCGear_Jacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138006 ];

	USFCItem_Common_SFWCGear_Jacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_SFWCGear_Glove.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_SFWCGear_Glove::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138019 ];

	USFCItem_GIGN_SFWCGear_Glove_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_SFWCGear_Glove.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_SFWCGear_Glove::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138016 ];

	USFCItem_Common_SFWCGear_Glove_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_SFWCGear_Jacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_SFWCGear_Jacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138029 ];

	USFCItem_GIGN_SFWCGear_Jacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shirts_SFWC2017_PMS.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_SFWC2017_PMS::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138040 ];

	USFCItem_Common_Shirts_SFWC2017_PMS_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shirts_SFWC.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_SFWC::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138037 ];

	USFCItem_Common_Shirts_SFWC_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shirts_SFWC2017_THA.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_SFWC2017_THA::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138050 ];

	USFCItem_Common_Shirts_SFWC2017_THA_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shirts_SFWC2017_JPN.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_SFWC2017_JPN::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138056 ];

	USFCItem_Common_Shirts_SFWC2017_JPN_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shirts_SFWC2017_KOR.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_SFWC2017_KOR::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138062 ];

	USFCItem_Common_Shirts_SFWC2017_KOR_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_SFWCGear_Boots.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_SFWCGear_Boots::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138068 ];

	USFCItem_Common_SFWCGear_Boots_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_SFWCGear_Pants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_SFWCGear_Pants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138074 ];

	USFCItem_Common_SFWCGear_Pants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_SFWCGear_Head.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_SFWCGear_Head::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138080 ];

	USFCItem_Common_SFWCGear_Head_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_EODPants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_EODPants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138091 ];

	USFCItem_Common_EODPants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_EODJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_EODJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138097 ];

	USFCItem_Common_EODJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_EODMask.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_EODMask::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138104 ];

	USFCItem_Common_EODMask_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Terrormask3.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Terrormask3::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138110 ];

	USFCItem_Common_Terrormask3_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_SuitPants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_SuitPants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138116 ];

	USFCItem_Common_SuitPants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_SuitJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_SuitJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138122 ];

	USFCItem_Common_SuitJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_RiotHelmet.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_RiotHelmet::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138129 ];

	USFCItem_Common_RiotHelmet_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shirts_PPAllStarWhite.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_PPAllStarWhite::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138135 ];

	USFCItem_Common_Shirts_PPAllStarWhite_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shirts_PPAllStarFlag.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_PPAllStarFlag::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138141 ];

	USFCItem_Common_Shirts_PPAllStarFlag_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shirts_PHBlack.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_PHBlack::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138147 ];

	USFCItem_Common_Shirts_PHBlack_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shirts_Sera.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Sera::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138187 ];

	USFCItem_Common_Shirts_Sera_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_ChickenBoots.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_ChickenBoots::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138206 ];

	USFCItem_Common_ChickenBoots_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_ChickenPants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_ChickenPants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138212 ];

	USFCItem_Common_ChickenPants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_ChickenBody.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_ChickenBody::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138218 ];

	USFCItem_Common_ChickenBody_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_ChickenMask.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_ChickenMask::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138225 ];

	USFCItem_Common_ChickenMask_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCWeaponRIS_ActionCamo_Equip.OwnerAttached
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USFCWeaponRIS_ActionCamo_Equip::OwnerAttached ( )
{
	static UFunction* pFnOwnerAttached = NULL;

	if ( ! pFnOwnerAttached )
		pFnOwnerAttached = (UFunction*) UObject::GObjObjects()->Data[ 138414 ];

	USFCWeaponRIS_ActionCamo_Equip_execOwnerAttached_Parms OwnerAttached_Parms;

	this->ProcessEvent ( pFnOwnerAttached, &OwnerAttached_Parms, NULL );

	return OwnerAttached_Parms.ReturnValue;
};

// Function SFGameContent.SFCItem_Func_WeaponCamo_Removal.GetSpecificIndexWithDataByID
// [0x00426002] 
// Parameters infos:
// class UObject*                 SpecificObject                 ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
// class UObject*                 SpecificObjectEx               ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
// int                            SpecificIndex                  ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
// int                            SpecificIndexEx                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

void USFCItem_Func_WeaponCamo_Removal::GetSpecificIndexWithDataByID ( class UObject** SpecificObject, class UObject** SpecificObjectEx, int* SpecificIndex, int* SpecificIndexEx )
{
	static UFunction* pFnGetSpecificIndexWithDataByID = NULL;

	if ( ! pFnGetSpecificIndexWithDataByID )
		pFnGetSpecificIndexWithDataByID = (UFunction*) UObject::GObjObjects()->Data[ 138528 ];

	USFCItem_Func_WeaponCamo_Removal_execGetSpecificIndexWithDataByID_Parms GetSpecificIndexWithDataByID_Parms;

	this->ProcessEvent ( pFnGetSpecificIndexWithDataByID, &GetSpecificIndexWithDataByID_Parms, NULL );

	if ( SpecificObject )
		*SpecificObject = GetSpecificIndexWithDataByID_Parms.SpecificObject;

	if ( SpecificObjectEx )
		*SpecificObjectEx = GetSpecificIndexWithDataByID_Parms.SpecificObjectEx;

	if ( SpecificIndex )
		*SpecificIndex = GetSpecificIndexWithDataByID_Parms.SpecificIndex;

	if ( SpecificIndexEx )
		*SpecificIndexEx = GetSpecificIndexWithDataByID_Parms.SpecificIndexEx;
};

// Function SFGameContent.SFCItem_Common_SmartTelecom.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_SmartTelecom::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138751 ];

	USFCItem_Common_SmartTelecom_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_MonkeyBackPack.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_MonkeyBackPack::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138837 ];

	USFCItem_Common_MonkeyBackPack_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_MechanixGlove.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_MechanixGlove::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138843 ];

	USFCItem_Common_MechanixGlove_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Ghoulmask.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Ghoulmask::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138850 ];

	USFCItem_Common_Ghoulmask_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shorts_Blue.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shorts_Blue::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138861 ];

	USFCItem_Common_Shorts_Blue_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shorts_Red.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shorts_Red::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138871 ];

	USFCItem_Common_Shorts_Red_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Towel_Crocodile.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Towel_Crocodile::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138884 ];

	USFCItem_Common_Towel_Crocodile_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_ProvideFastC4.ApplyItemToHostActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_ProvideFastC4::ApplyItemToHostActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToHostActor = NULL;

	if ( ! pFnApplyItemToHostActor )
		pFnApplyItemToHostActor = (UFunction*) UObject::GObjObjects()->Data[ 138911 ];

	USFCItem_Func_ProvideFastC4_execApplyItemToHostActor_Parms ApplyItemToHostActor_Parms;
	ApplyItemToHostActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToHostActor, &ApplyItemToHostActor_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_ProvideFastC4.IsPossibleToUse
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

bool USFCItem_Func_ProvideFastC4::IsPossibleToUse ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnIsPossibleToUse = NULL;

	if ( ! pFnIsPossibleToUse )
		pFnIsPossibleToUse = (UFunction*) UObject::GObjObjects()->Data[ 138912 ];

	USFCItem_Func_ProvideFastC4_execIsPossibleToUse_Parms IsPossibleToUse_Parms;
	IsPossibleToUse_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnIsPossibleToUse, &IsPossibleToUse_Parms, NULL );

	return IsPossibleToUse_Parms.ReturnValue;
};

// Function SFGameContent.SFCItem_Func_ProvideFastDISARMPDA.ApplyItemToHostActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_ProvideFastDISARMPDA::ApplyItemToHostActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToHostActor = NULL;

	if ( ! pFnApplyItemToHostActor )
		pFnApplyItemToHostActor = (UFunction*) UObject::GObjObjects()->Data[ 138920 ];

	USFCItem_Func_ProvideFastDISARMPDA_execApplyItemToHostActor_Parms ApplyItemToHostActor_Parms;
	ApplyItemToHostActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToHostActor, &ApplyItemToHostActor_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_ProvideFastDISARMPDA.IsPossibleToUse
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

bool USFCItem_Func_ProvideFastDISARMPDA::IsPossibleToUse ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnIsPossibleToUse = NULL;

	if ( ! pFnIsPossibleToUse )
		pFnIsPossibleToUse = (UFunction*) UObject::GObjObjects()->Data[ 138921 ];

	USFCItem_Func_ProvideFastDISARMPDA_execIsPossibleToUse_Parms IsPossibleToUse_Parms;
	IsPossibleToUse_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnIsPossibleToUse, &IsPossibleToUse_Parms, NULL );

	return IsPossibleToUse_Parms.ReturnValue;
};

// Function SFGameContent.SFCItem_Common_Towel_Duck.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Towel_Duck::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138930 ];

	USFCItem_Common_Towel_Duck_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Flippers_Green.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Flippers_Green::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 138938 ];

	USFCItem_Common_Flippers_Green_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Gothloli_Vampire_DefSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Gothloli_Vampire_DefSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139053 ];

	USFCItem_Gothloli_Vampire_DefSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_DuckMask.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_DuckMask::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139256 ];

	USFCItem_Common_DuckMask_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_CrocodileMask.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_CrocodileMask::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139262 ];

	USFCItem_Common_CrocodileMask_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Summercap.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Summercap::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139268 ];

	USFCItem_Common_Summercap_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Watergoggles.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Watergoggles::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139274 ];

	USFCItem_Common_Watergoggles_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Flippers_Yellow.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Flippers_Yellow::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139318 ];

	USFCItem_Common_Flippers_Yellow_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_SFWCCap.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_SFWCCap::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139324 ];

	USFCItem_Common_SFWCCap_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_SFWCBandana.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_SFWCBandana::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139330 ];

	USFCItem_Common_SFWCBandana_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_SFWCglove.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_SFWCglove::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139336 ];

	USFCItem_Common_SFWCglove_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_Shirts_SFWC.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Shirts_SFWC::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139343 ];

	USFCItem_GIGN_Shirts_SFWC_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_Tattoo_Shirts_03.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Tattoo_Shirts_03::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139369 ];

	USFCItem_GIGN_Tattoo_Shirts_03_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Tattoo_Shirts_03.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Tattoo_Shirts_03::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139379 ];

	USFCItem_Common_Tattoo_Shirts_03_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_Tattoo_Shirts_02.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Tattoo_Shirts_02::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139386 ];

	USFCItem_GIGN_Tattoo_Shirts_02_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Tattoo_Shirts_02.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Tattoo_Shirts_02::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139391 ];

	USFCItem_Common_Tattoo_Shirts_02_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_Tattoo_Shirts_01.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Tattoo_Shirts_01::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139396 ];

	USFCItem_GIGN_Tattoo_Shirts_01_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Tattoo_Shirts_01.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Tattoo_Shirts_01::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139403 ];

	USFCItem_Common_Tattoo_Shirts_01_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_Tattoo_Arm_02.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Tattoo_Arm_02::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139414 ];

	USFCItem_GIGN_Tattoo_Arm_02_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_Tattoo_Nude.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Tattoo_Nude::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139411 ];

	USFCItem_GIGN_Tattoo_Nude_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Tattoo_Arm_02.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Tattoo_Arm_02::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139424 ];

	USFCItem_Common_Tattoo_Arm_02_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Tattoo_Nude.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Tattoo_Nude::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139421 ];

	USFCItem_Common_Tattoo_Nude_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_Tattoo_Arm_01.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Tattoo_Arm_01::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139430 ];

	USFCItem_GIGN_Tattoo_Arm_01_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Tattoo_Arm_01.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Tattoo_Arm_01::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139435 ];

	USFCItem_Common_Tattoo_Arm_01_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_CombatGlove_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_CombatGlove_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139440 ];

	USFCItem_Common_CombatGlove_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_CombatGlove.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_CombatGlove::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139447 ];

	USFCItem_Common_CombatGlove_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_BattleGlove.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_BattleGlove::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139453 ];

	USFCItem_Common_BattleGlove_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_SpeedUpBoots.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_SpeedUpBoots::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139460 ];

	USFCItem_Common_SpeedUpBoots_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_CombatBoots_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_CombatBoots_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139466 ];

	USFCItem_Common_CombatBoots_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_CombatBoots.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_CombatBoots::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139472 ];

	USFCItem_Common_CombatBoots_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_BattleBoots.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_BattleBoots::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139478 ];

	USFCItem_Common_BattleBoots_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_PumpkinHelmet.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_PumpkinHelmet::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139857 ];

	USFCItem_Common_PumpkinHelmet_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shirts_Skeleton.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Skeleton::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 139863 ];

	USFCItem_Common_Shirts_Skeleton_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Scope_Zeiess.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Common_Scope_Zeiess::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 140087 ];

	USFCItem_Common_Scope_Zeiess_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Scope_Bender.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Common_Scope_Bender::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 140330 ];

	USFCItem_Common_Scope_Bender_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_Cz700_Def_Scope.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Cz700_Def_Scope::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 140496 ];

	USFCItem_Cz700_Def_Scope_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_AWP_Def_Scope.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_AWP_Def_Scope::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 140549 ];

	USFCItem_AWP_Def_Scope_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_FAMAS_Def_Sight.ApplyItemToWeap
// [0x00022000] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_FAMAS_Def_Sight::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 140816 ];

	USFCItem_FAMAS_Def_Sight_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_CheyTac_Def_Scope.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_CheyTac_Def_Scope::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 140896 ];

	USFCItem_CheyTac_Def_Scope_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Scope_K14_winter.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Common_Scope_K14_winter::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 141065 ];

	USFCItem_Common_Scope_K14_winter_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Scope_PM2.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Common_Scope_PM2::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 141535 ];

	USFCItem_Common_Scope_PM2_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_Barret_Def_Scope.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Barret_Def_Scope::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 142414 ];

	USFCItem_Barret_Def_Scope_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_SVCh_Scope_Bender.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_SVCh_Scope_Bender::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 142522 ];

	USFCItem_SVCh_Scope_Bender_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Scope_Kar98k.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Common_Scope_Kar98k::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 142669 ];

	USFCItem_Common_Scope_Kar98k_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_BowieKnife.ApplyItemToWeapByPenalty
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_BowieKnife::ApplyItemToWeapByPenalty ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeapByPenalty = NULL;

	if ( ! pFnApplyItemToWeapByPenalty )
		pFnApplyItemToWeapByPenalty = (UFunction*) UObject::GObjObjects()->Data[ 142838 ];

	USFCItem_BowieKnife_execApplyItemToWeapByPenalty_Parms ApplyItemToWeapByPenalty_Parms;
	ApplyItemToWeapByPenalty_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeapByPenalty, &ApplyItemToWeapByPenalty_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Scope_Dragunov.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Common_Scope_Dragunov::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 143549 ];

	USFCItem_Common_Scope_Dragunov_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_SR25_Def_Scope.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_SR25_Def_Scope::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 143862 ];

	USFCItem_SR25_Def_Scope_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_GPM30A1.ApplyItemToWeapByPenalty
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_GPM30A1::ApplyItemToWeapByPenalty ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeapByPenalty = NULL;

	if ( ! pFnApplyItemToWeapByPenalty )
		pFnApplyItemToWeapByPenalty = (UFunction*) UObject::GObjObjects()->Data[ 144228 ];

	USFCItem_GPM30A1_execApplyItemToWeapByPenalty_Parms ApplyItemToWeapByPenalty_Parms;
	ApplyItemToWeapByPenalty_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeapByPenalty, &ApplyItemToWeapByPenalty_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Scope_S2S.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Common_Scope_S2S::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 144375 ];

	USFCItem_Common_Scope_S2S_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_PSG1_Def_Scope.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_PSG1_Def_Scope::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 144797 ];

	USFCItem_PSG1_Def_Scope_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_Scope_S2S_Once.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Scope_S2S_Once::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 146037 ];

	USFCItem_Scope_S2S_Once_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shirts_Pirate.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Pirate::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146121 ];

	USFCItem_Common_Shirts_Pirate_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shirts_Clan_Blue.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Clan_Blue::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146131 ];

	USFCItem_Common_Shirts_Clan_Blue_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shirts_Clan.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Clan::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146128 ];

	USFCItem_Common_Shirts_Clan_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shirts_Clan_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Clan_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146138 ];

	USFCItem_Common_Shirts_Clan_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shirts_Clan_Red.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Clan_Red::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146142 ];

	USFCItem_Common_Shirts_Clan_Red_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shirts_Running_Matrix.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Running_Matrix::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146148 ];

	USFCItem_Common_Shirts_Running_Matrix_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shirts_Running_Leopard.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Running_Leopard::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146157 ];

	USFCItem_Common_Shirts_Running_Leopard_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shirts_Running_NBD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Running_NBD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146163 ];

	USFCItem_Common_Shirts_Running_NBD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Shirts_Python.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Shirts_Python::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146169 ];

	USFCItem_Common_Shirts_Python_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_PirateEye.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_PirateEye::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146364 ];

	USFCItem_UDT_PirateEye_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_PirateEye.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_PirateEye::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146374 ];

	USFCItem_GIGN_PirateEye_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_PirateEye.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_PirateEye::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146384 ];

	USFCItem_GAFE_PirateEye_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_PirateEye.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_PirateEye::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146394 ];

	USFCItem_SAS_PirateEye_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_PirateEye.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_PirateEye::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146404 ];

	USFCItem_Spetsnaz_PirateEye_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Delta_PirateEye.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Delta_PirateEye::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146414 ];

	USFCItem_Delta_PirateEye_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_MurderKnife.ApplyItemToWeapByPenalty
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_MurderKnife::ApplyItemToWeapByPenalty ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeapByPenalty = NULL;

	if ( ! pFnApplyItemToWeapByPenalty )
		pFnApplyItemToWeapByPenalty = (UFunction*) UObject::GObjObjects()->Data[ 146515 ];

	USFCItem_MurderKnife_execApplyItemToWeapByPenalty_Parms ApplyItemToWeapByPenalty_Parms;
	ApplyItemToWeapByPenalty_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeapByPenalty, &ApplyItemToWeapByPenalty_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_PirateHat.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_PirateHat::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146663 ];

	USFCItem_UDT_PirateHat_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_PirateHat.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_PirateHat::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146669 ];

	USFCItem_GIGN_PirateHat_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_PirateHat.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_PirateHat::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146675 ];

	USFCItem_SAS_PirateHat_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_PirateHat.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_PirateHat::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146681 ];

	USFCItem_GAFE_PirateHat_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_PirateHat.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_PirateHat::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146687 ];

	USFCItem_Spetsnaz_PirateHat_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Delta_PirateHat.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Delta_PirateHat::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 146693 ];

	USFCItem_Delta_PirateHat_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_M870_KnockBack.ApplyItemToWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_M870_KnockBack::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 147976 ];

	USFCItem_M870_KnockBack_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_M870_KnockBack.ApplyItemToHostWeap
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_M870_KnockBack::ApplyItemToHostWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToHostWeap = NULL;

	if ( ! pFnApplyItemToHostWeap )
		pFnApplyItemToHostWeap = (UFunction*) UObject::GObjObjects()->Data[ 147977 ];

	USFCItem_M870_KnockBack_execApplyItemToHostWeap_Parms ApplyItemToHostWeap_Parms;
	ApplyItemToHostWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToHostWeap, &ApplyItemToHostWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_M870_KnockBack.SetKnockBackParams
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_M870_KnockBack::SetKnockBackParams ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnSetKnockBackParams = NULL;

	if ( ! pFnSetKnockBackParams )
		pFnSetKnockBackParams = (UFunction*) UObject::GObjObjects()->Data[ 147979 ];

	USFCItem_M870_KnockBack_execSetKnockBackParams_Parms SetKnockBackParams_Parms;
	SetKnockBackParams_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnSetKnockBackParams, &SetKnockBackParams_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_ProvideWallet.ApplyItemToHostActorEx
// [0x00022002] 
// Parameters infos:
// class ASFShooterDefencePlayerReplicationInfo* ShooterPRI                     ( CPF_Parm )
// int                            ValIdx                         ( CPF_Parm )

void USFCItem_Func_ProvideWallet::ApplyItemToHostActorEx ( class ASFShooterDefencePlayerReplicationInfo* ShooterPRI, int ValIdx )
{
	static UFunction* pFnApplyItemToHostActorEx = NULL;

	if ( ! pFnApplyItemToHostActorEx )
		pFnApplyItemToHostActorEx = (UFunction*) UObject::GObjObjects()->Data[ 148697 ];

	USFCItem_Func_ProvideWallet_execApplyItemToHostActorEx_Parms ApplyItemToHostActorEx_Parms;
	ApplyItemToHostActorEx_Parms.ShooterPRI = ShooterPRI;
	ApplyItemToHostActorEx_Parms.ValIdx = ValIdx;

	this->ProcessEvent ( pFnApplyItemToHostActorEx, &ApplyItemToHostActorEx_Parms, NULL );
};

// Function SFGameContent.SFCItem_P226_Def_Body.ApplyItemToWeap
// [0x00022000] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_P226_Def_Body::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 149223 ];

	USFCItem_P226_Def_Body_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_P226_Def_Magazine.ApplyItemToWeap
// [0x00022000] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_P226_Def_Magazine::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 149234 ];

	USFCItem_P226_Def_Magazine_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_P226_Def_Sight.ApplyItemToWeap
// [0x00022000] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_P226_Def_Sight::ApplyItemToWeap ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeap = NULL;

	if ( ! pFnApplyItemToWeap )
		pFnApplyItemToWeap = (UFunction*) UObject::GObjObjects()->Data[ 149241 ];

	USFCItem_P226_Def_Sight_execApplyItemToWeap_Parms ApplyItemToWeap_Parms;
	ApplyItemToWeap_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeap, &ApplyItemToWeap_Parms, NULL );
};

// Function SFGameContent.SFCItem_Dagger.ApplyItemToWeapByPenalty
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               AppliedWeap                    ( CPF_Parm )

void USFCItem_Dagger::ApplyItemToWeapByPenalty ( class ASFWeapon* AppliedWeap )
{
	static UFunction* pFnApplyItemToWeapByPenalty = NULL;

	if ( ! pFnApplyItemToWeapByPenalty )
		pFnApplyItemToWeapByPenalty = (UFunction*) UObject::GObjObjects()->Data[ 149832 ];

	USFCItem_Dagger_execApplyItemToWeapByPenalty_Parms ApplyItemToWeapByPenalty_Parms;
	ApplyItemToWeapByPenalty_Parms.AppliedWeap = AppliedWeap;

	this->ProcessEvent ( pFnApplyItemToWeapByPenalty, &ApplyItemToWeapByPenalty_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_ProvideStat.ApplyItemToHostActorEx
// [0x00022002] 
// Parameters infos:
// class ASFShooterDefencePlayerReplicationInfo* ShooterPRI                     ( CPF_Parm )
// int                            ValIdx                         ( CPF_Parm )

void USFCItem_Func_ProvideStat::ApplyItemToHostActorEx ( class ASFShooterDefencePlayerReplicationInfo* ShooterPRI, int ValIdx )
{
	static UFunction* pFnApplyItemToHostActorEx = NULL;

	if ( ! pFnApplyItemToHostActorEx )
		pFnApplyItemToHostActorEx = (UFunction*) UObject::GObjObjects()->Data[ 150135 ];

	USFCItem_Func_ProvideStat_execApplyItemToHostActorEx_Parms ApplyItemToHostActorEx_Parms;
	ApplyItemToHostActorEx_Parms.ShooterPRI = ShooterPRI;
	ApplyItemToHostActorEx_Parms.ValIdx = ValIdx;

	this->ProcessEvent ( pFnApplyItemToHostActorEx, &ApplyItemToHostActorEx_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_AddPrimaryMagazine.ApplyMagazine
// [0x00022002] 
// Parameters infos:
// class ASFWeapon*               SFW                            ( CPF_Parm )

void USFCItem_Func_AddPrimaryMagazine::ApplyMagazine ( class ASFWeapon* SFW )
{
	static UFunction* pFnApplyMagazine = NULL;

	if ( ! pFnApplyMagazine )
		pFnApplyMagazine = (UFunction*) UObject::GObjObjects()->Data[ 150157 ];

	USFCItem_Func_AddPrimaryMagazine_execApplyMagazine_Parms ApplyMagazine_Parms;
	ApplyMagazine_Parms.SFW = SFW;

	this->ProcessEvent ( pFnApplyMagazine, &ApplyMagazine_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_AddPrimaryMagazine.ApplyItemToHostActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_AddPrimaryMagazine::ApplyItemToHostActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToHostActor = NULL;

	if ( ! pFnApplyItemToHostActor )
		pFnApplyItemToHostActor = (UFunction*) UObject::GObjObjects()->Data[ 150158 ];

	USFCItem_Func_AddPrimaryMagazine_execApplyItemToHostActor_Parms ApplyItemToHostActor_Parms;
	ApplyItemToHostActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToHostActor, &ApplyItemToHostActor_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_PvE_Haste.ApplyItemToHostActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_PvE_Haste::ApplyItemToHostActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToHostActor = NULL;

	if ( ! pFnApplyItemToHostActor )
		pFnApplyItemToHostActor = (UFunction*) UObject::GObjObjects()->Data[ 150188 ];

	USFCItem_Func_PvE_Haste_execApplyItemToHostActor_Parms ApplyItemToHostActor_Parms;
	ApplyItemToHostActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToHostActor, &ApplyItemToHostActor_Parms, NULL );
};

// Function SFGameContent.SFCItem_Beacon_RequestUAV.ApplyItemToHostActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Beacon_RequestUAV::ApplyItemToHostActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToHostActor = NULL;

	if ( ! pFnApplyItemToHostActor )
		pFnApplyItemToHostActor = (UFunction*) UObject::GObjObjects()->Data[ 150210 ];

	USFCItem_Beacon_RequestUAV_execApplyItemToHostActor_Parms ApplyItemToHostActor_Parms;
	ApplyItemToHostActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToHostActor, &ApplyItemToHostActor_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_InstantShockWave.ApplyItemToHostActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_InstantShockWave::ApplyItemToHostActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToHostActor = NULL;

	if ( ! pFnApplyItemToHostActor )
		pFnApplyItemToHostActor = (UFunction*) UObject::GObjObjects()->Data[ 150220 ];

	USFCItem_Func_InstantShockWave_execApplyItemToHostActor_Parms ApplyItemToHostActor_Parms;
	ApplyItemToHostActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToHostActor, &ApplyItemToHostActor_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_RecoveryHP.CanPurchaseInGameStore
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASFPawn*                 ApplidedPawn                   ( CPF_Parm )

bool USFCItem_Func_RecoveryHP::CanPurchaseInGameStore ( class ASFPawn* ApplidedPawn )
{
	static UFunction* pFnCanPurchaseInGameStore = NULL;

	if ( ! pFnCanPurchaseInGameStore )
		pFnCanPurchaseInGameStore = (UFunction*) UObject::GObjObjects()->Data[ 150234 ];

	USFCItem_Func_RecoveryHP_execCanPurchaseInGameStore_Parms CanPurchaseInGameStore_Parms;
	CanPurchaseInGameStore_Parms.ApplidedPawn = ApplidedPawn;

	this->ProcessEvent ( pFnCanPurchaseInGameStore, &CanPurchaseInGameStore_Parms, NULL );

	return CanPurchaseInGameStore_Parms.ReturnValue;
};

// Function SFGameContent.SFCItem_Func_RecoveryHP.ApplyItemToActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_RecoveryHP::ApplyItemToActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToActor = NULL;

	if ( ! pFnApplyItemToActor )
		pFnApplyItemToActor = (UFunction*) UObject::GObjObjects()->Data[ 150235 ];

	USFCItem_Func_RecoveryHP_execApplyItemToActor_Parms ApplyItemToActor_Parms;
	ApplyItemToActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToActor, &ApplyItemToActor_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_MiniMapPing.ApplyItemToActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_MiniMapPing::ApplyItemToActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToActor = NULL;

	if ( ! pFnApplyItemToActor )
		pFnApplyItemToActor = (UFunction*) UObject::GObjObjects()->Data[ 150273 ];

	USFCItem_Func_MiniMapPing_execApplyItemToActor_Parms ApplyItemToActor_Parms;
	ApplyItemToActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToActor, &ApplyItemToActor_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_ProvideHumanHealth.IsPossibleToUse
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

bool USFCItem_Func_ProvideHumanHealth::IsPossibleToUse ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnIsPossibleToUse = NULL;

	if ( ! pFnIsPossibleToUse )
		pFnIsPossibleToUse = (UFunction*) UObject::GObjObjects()->Data[ 150294 ];

	USFCItem_Func_ProvideHumanHealth_execIsPossibleToUse_Parms IsPossibleToUse_Parms;
	IsPossibleToUse_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnIsPossibleToUse, &IsPossibleToUse_Parms, NULL );

	return IsPossibleToUse_Parms.ReturnValue;
};

// Function SFGameContent.SFCItem_Func_FreeInstantRespawn.ApplyItemToActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_FreeInstantRespawn::ApplyItemToActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToActor = NULL;

	if ( ! pFnApplyItemToActor )
		pFnApplyItemToActor = (UFunction*) UObject::GObjObjects()->Data[ 150313 ];

	USFCItem_Func_FreeInstantRespawn_execApplyItemToActor_Parms ApplyItemToActor_Parms;
	ApplyItemToActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToActor, &ApplyItemToActor_Parms, NULL );
};

// Function SFGameContent.SFCItem_Func_PrimaryMagazineUp.ApplyItemToHostActor
// [0x00022002] 
// Parameters infos:
// class AActor*                  AppliedActor                   ( CPF_Parm )

void USFCItem_Func_PrimaryMagazineUp::ApplyItemToHostActor ( class AActor* AppliedActor )
{
	static UFunction* pFnApplyItemToHostActor = NULL;

	if ( ! pFnApplyItemToHostActor )
		pFnApplyItemToHostActor = (UFunction*) UObject::GObjObjects()->Data[ 150318 ];

	USFCItem_Func_PrimaryMagazineUp_execApplyItemToHostActor_Parms ApplyItemToHostActor_Parms;
	ApplyItemToHostActor_Parms.AppliedActor = AppliedActor;

	this->ProcessEvent ( pFnApplyItemToHostActor, &ApplyItemToHostActor_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_CombatPants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_CombatPants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150370 ];

	USFCItem_SAS_CombatPants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_BattlePants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_BattlePants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150379 ];

	USFCItem_SAS_BattlePants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_CombatJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_CombatJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150384 ];

	USFCItem_SAS_CombatJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_BattleJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_BattleJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150400 ];

	USFCItem_SAS_BattleJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_GasMask.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_GasMask::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150407 ];

	USFCItem_Common_GasMask_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_CombatHelmet.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_CombatHelmet::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150421 ];

	USFCItem_SAS_CombatHelmet_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_CombatPants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_CombatPants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150438 ];

	USFCItem_GAFE_CombatPants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_BattlePants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_BattlePants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150447 ];

	USFCItem_GAFE_BattlePants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_CombatJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_CombatJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150452 ];

	USFCItem_GAFE_CombatJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_BattleJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_BattleJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150468 ];

	USFCItem_GAFE_BattleJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_CombatHelmet.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_CombatHelmet::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150479 ];

	USFCItem_GAFE_CombatHelmet_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_ChristmasGlove.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_ChristmasGlove::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150487 ];

	USFCItem_Common_ChristmasGlove_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_SpeicalSuit.ApplyItemToHostPawn
// [0x00022000] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_SpeicalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150641 ];

	USFCItem_GIGN_SpeicalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_DeltaForce_ScoutSuit.ApplyItemToHostPawn
// [0x00022000] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_ScoutSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150725 ];

	USFCItem_DeltaForce_ScoutSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_CombatPants_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_CombatPants_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150757 ];

	USFCItem_UDT_CombatPants_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_CombatPants_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_CombatPants_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150766 ];

	USFCItem_GAFE_CombatPants_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_CombatPants_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_CombatPants_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150775 ];

	USFCItem_GIGN_CombatPants_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_CombatPants_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_CombatPants_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150784 ];

	USFCItem_SAS_CombatPants_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCitem_Spetsnaz_CombatPants_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCitem_Spetsnaz_CombatPants_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150793 ];

	USFCitem_Spetsnaz_CombatPants_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCitem_Deltaforce_CombatPants_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCitem_Deltaforce_CombatPants_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150802 ];

	USFCitem_Deltaforce_CombatPants_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_CombatJacket_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_CombatJacket_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150811 ];

	USFCItem_UDT_CombatJacket_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_CombatJacket_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_CombatJacket_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150825 ];

	USFCItem_GAFE_CombatJacket_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_CombatJacket_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_CombatJacket_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150838 ];

	USFCItem_GIGN_CombatJacket_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_CombatJacket_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_CombatJacket_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150852 ];

	USFCItem_SAS_CombatJacket_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCitem_Spetsnaz_CombatJacket_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCitem_Spetsnaz_CombatJacket_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150865 ];

	USFCitem_Spetsnaz_CombatJacket_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCitem_Deltaforce_CombatJacket_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCitem_Deltaforce_CombatJacket_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150879 ];

	USFCitem_Deltaforce_CombatJacket_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_CombatHelmet_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_CombatHelmet_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150893 ];

	USFCItem_UDT_CombatHelmet_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_CombatHelmet_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_CombatHelmet_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150901 ];

	USFCItem_GAFE_CombatHelmet_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_CombatHelmet_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_CombatHelmet_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150908 ];

	USFCItem_GIGN_CombatHelmet_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_CombatHelmet_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_CombatHelmet_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150916 ];

	USFCItem_SAS_CombatHelmet_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCitem_Spetsnaz_CombatHelmet_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCitem_Spetsnaz_CombatHelmet_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150923 ];

	USFCitem_Spetsnaz_CombatHelmet_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCitem_Deltaforce_CombatHelmet_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCitem_Deltaforce_CombatHelmet_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150931 ];

	USFCitem_Deltaforce_CombatHelmet_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCitem_Common_TacticalBoots_D.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCitem_Common_TacticalBoots_D::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150971 ];

	USFCitem_Common_TacticalBoots_D_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_ChristmasBoots.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_ChristmasBoots::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150976 ];

	USFCItem_Common_ChristmasBoots_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_CombatPants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_CombatPants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150982 ];

	USFCItem_UDT_CombatPants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_BattlePants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_BattlePants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150989 ];

	USFCItem_UDT_BattlePants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_CombatPants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_CombatPants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 150994 ];

	USFCItem_GIGN_CombatPants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_BattlePants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_BattlePants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151001 ];

	USFCItem_GIGN_BattlePants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_CombatPants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_CombatPants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151006 ];

	USFCItem_Spetsnaz_CombatPants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_BattlePants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_BattlePants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151013 ];

	USFCItem_Spetsnaz_BattlePants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Deltaforce_CombatPants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Deltaforce_CombatPants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151018 ];

	USFCItem_Deltaforce_CombatPants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Deltaforce_BattlePants.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Deltaforce_BattlePants::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151025 ];

	USFCItem_Deltaforce_BattlePants_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_CombatJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_CombatJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151035 ];

	USFCItem_UDT_CombatJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_BattleJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_BattleJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151045 ];

	USFCItem_UDT_BattleJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_CombatJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_CombatJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151050 ];

	USFCItem_GIGN_CombatJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_BattleJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_BattleJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151061 ];

	USFCItem_GIGN_BattleJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_CombatJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_CombatJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151066 ];

	USFCItem_Spetsnaz_CombatJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_BattleJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_BattleJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151076 ];

	USFCItem_Spetsnaz_BattleJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Deltaforce_CombatJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Deltaforce_CombatJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151081 ];

	USFCItem_Deltaforce_CombatJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Deltaforce_BattleJacket.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Deltaforce_BattleJacket::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151091 ];

	USFCItem_Deltaforce_BattleJacket_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Sunglass_C.ApplyItemToPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Sunglass_C::ApplyItemToPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToPawn = NULL;

	if ( ! pFnApplyItemToPawn )
		pFnApplyItemToPawn = (UFunction*) UObject::GObjObjects()->Data[ 151100 ];

	USFCItem_Common_Sunglass_C_execApplyItemToPawn_Parms ApplyItemToPawn_Parms;
	ApplyItemToPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToPawn, &ApplyItemToPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_ChristmasBeard.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_ChristmasBeard::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151106 ];

	USFCItem_Common_ChristmasBeard_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_Balaclava_BeastSkull.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_Balaclava_BeastSkull::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151116 ];

	USFCItem_SAS_Balaclava_BeastSkull_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_Balaclava_BeastSkull.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_Balaclava_BeastSkull::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151126 ];

	USFCItem_GAFE_Balaclava_BeastSkull_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_Balaclava_BeastSkull.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Balaclava_BeastSkull::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151136 ];

	USFCItem_GIGN_Balaclava_BeastSkull_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_Balaclava_BeastSkull.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_Balaclava_BeastSkull::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151146 ];

	USFCItem_Spetsnaz_Balaclava_BeastSkull_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_DeltaForce_Balaclava_BeastSkull.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_Balaclava_BeastSkull::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151156 ];

	USFCItem_DeltaForce_Balaclava_BeastSkull_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_Balaclava_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_Balaclava_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151166 ];

	USFCItem_SAS_Balaclava_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_Balaclava_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_Balaclava_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151176 ];

	USFCItem_GAFE_Balaclava_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_Balaclava_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Balaclava_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151186 ];

	USFCItem_GIGN_Balaclava_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_Balaclava_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_Balaclava_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151196 ];

	USFCItem_Spetsnaz_Balaclava_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_DeltaForce_Balaclava_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_Balaclava_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151206 ];

	USFCItem_DeltaForce_Balaclava_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Common_Christmas_Cap.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Common_Christmas_Cap::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151216 ];

	USFCItem_Common_Christmas_Cap_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_BooniHat_SE.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_BooniHat_SE::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151222 ];

	USFCItem_UDT_BooniHat_SE_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_Balaclava_BeastSkull.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_Balaclava_BeastSkull::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151228 ];

	USFCItem_UDT_Balaclava_BeastSkull_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_Balaclava_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_Balaclava_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151238 ];

	USFCItem_UDT_Balaclava_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_BooniHat_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_BooniHat_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151248 ];

	USFCItem_UDT_BooniHat_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_BooniHat_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_BooniHat_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151255 ];

	USFCItem_UDT_BooniHat_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_Bandana_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_Bandana_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151261 ];

	USFCItem_UDT_Bandana_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_Bandana_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_Bandana_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151267 ];

	USFCItem_UDT_Bandana_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_Cap_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_Cap_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151273 ];

	USFCItem_UDT_Cap_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_Cap_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_Cap_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151280 ];

	USFCItem_UDT_Cap_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_Beret_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_Beret_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151286 ];

	USFCItem_UDT_Beret_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_Beret_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_Beret_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151293 ];

	USFCItem_UDT_Beret_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_CombatHelmet.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_CombatHelmet::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151299 ];

	USFCItem_UDT_CombatHelmet_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_Beret_SE.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_Beret_SE::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151304 ];

	USFCItem_GAFE_Beret_SE_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_BooniHat_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_BooniHat_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151310 ];

	USFCItem_GAFE_BooniHat_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_BooniHat_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_BooniHat_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151317 ];

	USFCItem_GAFE_BooniHat_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_Bandana_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_Bandana_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151323 ];

	USFCItem_GAFE_Bandana_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_Bandana_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_Bandana_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151329 ];

	USFCItem_GAFE_Bandana_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_Cap_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_Cap_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151335 ];

	USFCItem_GAFE_Cap_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_Cap_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_Cap_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151342 ];

	USFCItem_GAFE_Cap_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_Beret_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_Beret_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151348 ];

	USFCItem_GAFE_Beret_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_Beret_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_Beret_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151355 ];

	USFCItem_GAFE_Beret_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_Bandana_SE.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Bandana_SE::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151361 ];

	USFCItem_GIGN_Bandana_SE_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_BooniHat_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_BooniHat_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151367 ];

	USFCItem_GIGN_BooniHat_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_BooniHat_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_BooniHat_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151374 ];

	USFCItem_GIGN_BooniHat_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_Bandana_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Bandana_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151380 ];

	USFCItem_GIGN_Bandana_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_Bandana_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Bandana_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151386 ];

	USFCItem_GIGN_Bandana_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_Cap_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Cap_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151392 ];

	USFCItem_GIGN_Cap_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_Cap_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Cap_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151399 ];

	USFCItem_GIGN_Cap_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_Beret_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Beret_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151405 ];

	USFCItem_GIGN_Beret_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_Beret_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_Beret_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151412 ];

	USFCItem_GIGN_Beret_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_CombatHelmet.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_CombatHelmet::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151418 ];

	USFCItem_GIGN_CombatHelmet_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_BooniHat_SE.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_BooniHat_SE::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151423 ];

	USFCItem_SAS_BooniHat_SE_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_BooniHat_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_BooniHat_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151429 ];

	USFCItem_SAS_BooniHat_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_BooniHat_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_BooniHat_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151436 ];

	USFCItem_SAS_BooniHat_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_Bandana_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_Bandana_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151442 ];

	USFCItem_SAS_Bandana_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_Bandana_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_Bandana_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151448 ];

	USFCItem_SAS_Bandana_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_Cap_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_Cap_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151454 ];

	USFCItem_SAS_Cap_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_Cap_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_Cap_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151461 ];

	USFCItem_SAS_Cap_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_Beret_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_Beret_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151467 ];

	USFCItem_SAS_Beret_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_Beret_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_Beret_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151474 ];

	USFCItem_SAS_Beret_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_BooniHat_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_BooniHat_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151480 ];

	USFCItem_Spetsnaz_BooniHat_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_BooniHat_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_BooniHat_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151487 ];

	USFCItem_Spetsnaz_BooniHat_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_Bandana_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_Bandana_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151493 ];

	USFCItem_Spetsnaz_Bandana_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_Bandana_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_Bandana_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151499 ];

	USFCItem_Spetsnaz_Bandana_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_Cap_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_Cap_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151505 ];

	USFCItem_Spetsnaz_Cap_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_Cap_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_Cap_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151512 ];

	USFCItem_Spetsnaz_Cap_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_Beret_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_Beret_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151518 ];

	USFCItem_Spetsnaz_Beret_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_Beret_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_Beret_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151525 ];

	USFCItem_Spetsnaz_Beret_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_CombatHelmet.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_CombatHelmet::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151531 ];

	USFCItem_Spetsnaz_CombatHelmet_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_Beret_SE.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_Beret_SE::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151536 ];

	USFCItem_Spetsnaz_Beret_SE_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_DeltaForce_BooniHat_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_BooniHat_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151562 ];

	USFCItem_DeltaForce_BooniHat_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_DeltaForce_BooniHat_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_BooniHat_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151570 ];

	USFCItem_DeltaForce_BooniHat_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_DeltaForce_Bandana_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_Bandana_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151576 ];

	USFCItem_DeltaForce_Bandana_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_DeltaForce_Bandana_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_Bandana_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151582 ];

	USFCItem_DeltaForce_Bandana_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_DeltaForce_Cap_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_Cap_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151588 ];

	USFCItem_DeltaForce_Cap_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_DeltaForce_Cap_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_Cap_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151595 ];

	USFCItem_DeltaForce_Cap_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_DeltaForce_Beret_Black.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_Beret_Black::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151601 ];

	USFCItem_DeltaForce_Beret_Black_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_DeltaForce_Beret_OD.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_Beret_OD::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151608 ];

	USFCItem_DeltaForce_Beret_OD_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Deltaforce_CombatHelmet.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Deltaforce_CombatHelmet::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151614 ];

	USFCItem_Deltaforce_CombatHelmet_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_DeltaForce_Cap_SE.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_Cap_SE::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151619 ];

	USFCItem_DeltaForce_Cap_SE_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_UDT_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_UDT_NormalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151625 ];

	USFCItem_UDT_NormalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GAFE_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GAFE_NormalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151630 ];

	USFCItem_GAFE_NormalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_GIGN_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_GIGN_NormalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151635 ];

	USFCItem_GIGN_NormalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_SAS_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_SAS_NormalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151640 ];

	USFCItem_SAS_NormalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_Spetsnaz_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_Spetsnaz_NormalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151645 ];

	USFCItem_Spetsnaz_NormalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};

// Function SFGameContent.SFCItem_DeltaForce_NormalSuit.ApplyItemToHostPawn
// [0x00022002] 
// Parameters infos:
// class ASFPawn*                 AppliedPawn                    ( CPF_Parm )

void USFCItem_DeltaForce_NormalSuit::ApplyItemToHostPawn ( class ASFPawn* AppliedPawn )
{
	static UFunction* pFnApplyItemToHostPawn = NULL;

	if ( ! pFnApplyItemToHostPawn )
		pFnApplyItemToHostPawn = (UFunction*) UObject::GObjObjects()->Data[ 151650 ];

	USFCItem_DeltaForce_NormalSuit_execApplyItemToHostPawn_Parms ApplyItemToHostPawn_Parms;
	ApplyItemToHostPawn_Parms.AppliedPawn = AppliedPawn;

	this->ProcessEvent ( pFnApplyItemToHostPawn, &ApplyItemToHostPawn_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif