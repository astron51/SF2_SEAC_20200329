/*

--------- * Benzaiten * ---------
Benzaiten :: Built for private use on Special Force 2 PlayPark
Processor.h : Frontend for the Cheat and hooking point
---------------------------------

*/

std::ofstream Log::LOG("SpecialForce2.CheatLog");

void BeginRoutine()
{
	TArray< UObject* >* GObjObjects = (TArray< UObject* >*) GObjects;
	do { Log() << GObjObjects->Count; Sleep(500); } while (GObjObjects->Count < 160547);

	oProcessEvent = (tProcessEvent)VMTHook(GObjObjects, "SFGameViewportClient Transient.SFGameEngine.SFGameViewportClient", ProcessEventIndex);
	VMTHook(GObjObjects, "SFPlayerController SFGame.Default__SFPlayerController", ProcessEventIndex);
	VMTHook(GObjObjects, "Controller Engine.Default__Controller", ProcessEventIndex);
	VMTHook(GObjObjects, "PlayerController Engine.Default__PlayerController", ProcessEventIndex);
	VMTHook(GObjObjects, "SFPawn SFGame.Default__SFPawn", ProcessEventIndex);
	VMTHook(GObjObjects, "Pawn Engine.Default__Pawn", ProcessEventIndex);
	VMTHook(GObjObjects, "SFPawn_Player SFGame.Default__SFPawn_Player", ProcessEventIndex);
	VMTHook(GObjObjects, "SFWeapon SFGame.Default__SFWeapon", ProcessEventIndex);
	VMTHook(GObjObjects, "SFWeap_InstantHit SFGame.Default__SFWeap_InstantHit", ProcessEventIndex);
	VMTHook(GObjObjects, "SFWeap_Bullet SFGame.Default__SFWeap_Bullet", ProcessEventIndex);
}