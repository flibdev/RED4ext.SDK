#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
struct CGameFramework;

struct UpdateEntry
{
    char *Unk0Str;
    char *srcStr;
    char *funcStr;
    uint32_t unk18;
    uint32_t thread;
    uint32_t unk20;
    uint32_t unk24;
    uint32_t Unk0Hash32;
    uint32_t unk2C;
    uint32_t unk30;
    uint32_t unk34;
    uint16_t unk38;
    uint16_t unk3A;
    uint32_t unk3C;
};

struct UpdateManagerHolder;

struct IUpdatableSystem : IScriptable
{
    static constexpr const char* NAME = "IUpdatableSystem";
    static constexpr const char* ALIAS = NAME;
    static constexpr const uintptr_t VFT_RVA = 0x31A6470;

    struct Update
    {
        IUpdatableSystem *system;
        uint64_t unk08;
        uint64_t unk10;
        uint64_t unk18;
        CallbackStruct *callbackStruct;
    };

    // 1.52 RVA: 0xA779C0 / 10975680
    /// @pattern 40 53 48 83 EC 20 48 8B D9 E8 82 7F 76 FF 48 8D 05 9B EA 72 02 48 89 03 48 8B C3 48 83 C4 20 5B
    IUpdatableSystem();
    
    virtual RED4ext::CClass* GetNativeType() override;
    virtual ~IUpdatableSystem() override;

    // 1.52 RVA: 0xA86060 / 11034720
    /// @pattern 0F B6 C1 83 F8 0C 77 7B 48 8D 15 91 9F 57 FF 8B 8C 82 EC 60 A8 00 48 03 CA FF E1 48 8D 05 46 18
    // static const char *__fastcall GetStringForUnk0(Unk0);

    // sub_110 - adds callbacks to the lookup - there are at least 10 dynarrays
    virtual void RegisterUpdates(UpdateManagerHolder* holder) { }; 
};
RED4EXT_ASSERT_SIZE(IUpdatableSystem, 0x40);


struct UpdateManager {

    enum class Unk0 : char {
        // TierSystem, MountingFacility, HitRepresentationSystem
        // AIDirectorSystem, UpdateTime, Damage, TrafficSystemMovement
        // Audio/FinishAsyncJob, Traffic_FrameStart, DebugCheatsSystem
        // Navigation/Update, RuntimeSystemDestruction/WaitFractureCallbacks
        // GameRules, RuntimeSystemNodeStreaming/ProcessNodes
        // Multiplayer/UpdateTime, AnimationSystem_FrameBeginReset
        // PlayerManager/Tick
        FrameBegin = 0x0,
        // Server/DeleteEntities
        Multiplayer_UpdateStateSnapshots = 0x1,
        // TrafficMovement/UpdateAvoidanceManager, Entities/UpdateState
        EntityUpdateState = 0x2,
        // EffectorSystem, vehicleMoveSystem, ApplyWind, VisionModeSystem
        // TrafficSystemMovement_UpdateVehicles, PersistencySystem/HandlePSEvents
        // WeatherSystem, TransformAnimator, PlayerSystem, FunctionalTests/OnPreWorldTick
        // CorpseSystem_ExecuteTransaction, AnimationSystem_ExecuteTransaction
        // ContainerManager/TickVisibility, ProjectileSystem/TickPreBuckets
        PreBuckets = 0x3,
        // Many are this
        // ShootingAccuracySystem, TransformsHistorySystem
        // EnvironmentDamageSystem, DeviceSystem/TickDeviceVisibility
        // Audio, UI/RuntimeSystem/AudioHandlersUpdate
        Buckets = 0x4,
        // TransactionSystem, LightSystem, LootManager, 
        // ObjectCarrySystem, FootstepSystem, DelaySystem
        // CooldownSystem, CombatQueriesSystem, InteractionManager
        // DamageSystem/CallbackUpdate, WorkspotManager/PostBucketsTick
        // PersistencySystem/UpdateCache, UpdateTriggers,
        // WatchdogSystem/Log/FrameBegin, TrafficSystemMovement_UpdatePedestrians
        // RuntimeSystemCamera/UpdateComponents, Corpses, Dismemberment/TickKick
        // ContainerManager/Tick
        PostBuckets = 0x5,
        // ObjectPool, ItemFactory, CameraSystem, Traffic/Update, Dismemberment/TickFinish
        CameraUpdate = 0x6,
        // StatusEffectSystem, CameraSystem/PlayerAnim, UI/RuntimeSystem
        // RuntimeSystemNodeStreaming/ProcessContent, PlayerManager/TickAim
        PlayerAimUpdate = 0x7,
        // gameFxSystem, gameEffectSystem, EffectAttachments, PhotoMode/AnimUpdate
        // ProjectileSystem/TickPostCamera, TargetingSystem/TickKick
        PostPlayerAimUpdate = 0x8,
        // StimuliSystem, MinimapSystem, EntityStubHandlerProviderSystem
        // EntityStubSystem, PopulationSystem/UpdateVisQueriesAfterPooling
        // RuntimeSystemEffects/UpdateJobsKick, TargetingSystem/TickFinish
        MappinsUpdate = 0x9,
        // BlackboardSystem/FireCallbacks_SecondPass, RuntimeSystemEffects/UpdateJobsFinish
        BlackboardCallbacks_SecondPass = 0xA,
        // Audio, TrafficSystemMovement_Wait, AutoSaveSystem, EntityVisualController
        // GOGRewards, UI/RuntimeSystem/FullscreenProcessing
        // FlushPendingOccluders, AttachPendingProxies, EntityVisualController
        // Telemetry, gameActivityCardsSystem, Physics/KickAndWaitSimulation
        PreRenderUpdate = 0xB,
        // Server/PreCaptureStateSnapshots
        Multiplayer_CaptureStateSnapshots = 0xC,
        Unknown = 0xD
    };

    enum class Unk1 : char {
        // Entities/PreTick, MovingPlatforms/Tick, PuppetUpdaterSystem/PreTick, ReactionSystem::Update
        Entities_PreTick            = 0x0,
        // Entities/ServiceEvents, RuntimeSystemDestruction/FoliageDestructionTick
        // RuntimeSystemDestruction/FractureFieldsTick, WorkspotSystem/Tick, VehicleSystem
        // UpdateGameAudioSystem, Audio/ScanningSystem, ProjectileSystem/Tick
        // SenseManager/OnPreWorldTick, RuntimeSystemDestruction/Tick,
        Entities_ServiceEvents      = 0x1,
        // InfluenceSystem/OnPreWorldTick, PopulationSystem/SpawnShapes
        PrePhysicsTick              = 0x2,
        // EntityVisualController_UpdateCloth
        UpdateTransformPrePhysics   = 0x3,
        // ActivityLogSystem/Tick, WorkspotSystem/TickItemAttachments, Physics/UpdateInBucket
        // ScriptableSystems/Tick, StatsSystem/Tick
        PhysicsFlushBufferedState   = 0x4,
        // DamageSystem/ProcessHitEventQueue, Physics/ExecuteAsyncQueries, EntityAnimations/PreUpdateKick
        PhysicsExecuteAsyncQueries  = 0x5,
        // EntityPhysics/PostCharacterControllerTransforms, EntityAnimations/PreUpdateFinish
        PostPhysicsSyncResults      = 0x6,
        UpdateTransformPostPhysics  = 0x7,
        // EntityAnimations/Update, CollisionNodeManager/TickKick, SpatialQueriesSystem/Kick, PopulationSystem
        // StatPoolsSystem/Tick, AI/ObjectSelection/Update main
        AnimationUpdate             = 0x8,
        // CollisionNodeManager/TickFinish, SpatialQueriesSystem/Finish, PopualtionSystem, VehicleSystem
        // EffectTriggerSystem/Tick, RuntimeSystemDestruction/CleanupOutOfBoundsStates, FriendlyFireSystem/Tick
        // GodModeSystem/Tick, LoSFinderSystem/Tick, AI/TargetTracking/Update, WorldBoundarySystem/Tick
        // EntitySpawnerEventsBroadcasterImpl/UpdatePendingEvents, BlackboardSystem/FireCallbacks
        PostPhysicsTick             = 0x9,
        // Entities/PostTick
        Entities_PostTick           = 0xA,
        // Entities/PostServiceEvents, AI/Combat/GroupManager/Update
        Entities_PostServiceEvents  = 0xB,
        // Many are this
        Unknown                     = 0xC
    };


    // 0 RuntimeSystem/Entity/Animation/DisplaySelectedOnly
    // 1 RuntimeSystem/Entity/Animation/DisplayPerformance
    // 2 RuntimeSystem/Entity/Animation/DisplayLOD
    // 3 RuntimeSystem/Entity/Animation/DisplayFacial
    // 4 RuntimeSystem/Entity/Animation/DisplayVisibilityBoxes
    // 5 RuntimeSystem/Entity/Animation/AnimationStreaming
    // 6 RuntimeSystem/Entity/Animation/DisplayCameraTransform
    // 7 RuntimeSystem/Entity/Animation/DisplayPredictedCameraTransform
    // 8 RuntimeSystem/Entity/Animation/DisplayCameraFrustum
    // 9 RuntimeSystem/Entity/Animation/DisplayCameraDataForVehiclesBucket
    // A RuntimeSystem/Entity/Animation/DisplayCameraDataForCharactersBucket
    // B RuntimeSystem/Entity/Animation/DisplayCameraDataForPropsBucket
    // C RuntimeSystem/Entity/Animation/DisplayRenderingStats


// #include <RED4ext/Scripting/Natives/Generated/UpdateBucketEnum.hpp>

    enum class Unk2 : char {
        VeryCommon = 0x0,  // Most are this
        FoliageDestructionTick = 0x1,
        UpdateKick = 0x1,
        UpdateFinish = 0x1,
        OnPreWorldTick = 0x1,
        SpawnShapes = 0x1, // PopulationSystem
        UpdatePoolingKick = 0x2, // PopulationSystem
        UpdatePoolingFinish = 0x2, // PopualtionSystem
        BatchRaycastResolverCall = 0x2,
        BatchRaycastResolverGetResults = 0x2,
        // VehicleSystem = 0x1,
        UpdateCloth = 0x2,
        PrePhysics = 0x2,
        Tick = 0x2,
        FractureFieldsTick = 0x4,
        CacheUpdate = 0x4,
        CleanupOutOfBoundsStates = 0x4,
        PostPhysics = 0x4,
        CleanupUpdateKick = 0x4,
        CleanupUpdateFinish = 0x4,
        Common = 0x7,
    };

    struct UpdateStorage 
    {
        Unk0 index;
        Unk1 unk01;
        Unk2 unk02;
        uint8_t unk03;
        uint8_t unk04;
        uint8_t unk05;
        uint8_t unk06;
        uint8_t unk07;
        IUpdatableSystem::Update update1;
        IUpdatableSystem::Update update2;
        CClass *systemCls;
        char *nameStr;
        uint32_t thread;
        uint32_t unk6C;
        UpdateEntry * entry;
        uint8_t unk78;
        uint8_t unk79[7];

        // 1.52 RVA: 0xA86960 / 11037024
        /// @pattern 48 89 5C 24 18 55 56 57 41 56 41 57 48 83 EC 60 4C 8B F1 48 8B DA 0F B6 4A 32 E8 91 16 13 02 48
        void FireCallback(void * a2);

        // 1.52 RVA: 0xA85C10 / 11033616
        /// @pattern 48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 18 41 56 48 83 EC 20 0F B7 02 48 8D 72 08 66 89 01 48
        UpdateStorage *__fastcall Copy(UpdateStorage *a2);

        // 1.52 RVA: 0xA85470 / 11031664
        /// @pattern 48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 0F B7 02 48 8B DA 66 89 01 48 8B F9
        UpdateStorage *__fastcall Copy_0(UpdateStorage *a2);
    };

    // 1.52 RVA: 0xA85990 / 11032976
    /// @pattern 48 89 6C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56 48 83 EC 20 8B B1 D0 00 00 00 33 ED 4C 8B F1
    void __fastcall ReleaseUnknown();

    // 1.52 RVA: 0xA86820 / 11036704
    /// @pattern 48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 18 41 56 48 83 EC 40 0F B6 1A 48 8B F2 48 C1 E3 04 48
    uint64_t __fastcall RegisterUpdate(UpdateStorage *update);

    // 1.52 RVA: 0xA86DE0 / 11038176
    /// @pattern 48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 41 54 41 55 41 56 41 57 48 83 EC 20 4C 8B 29 B8
    __int64 __fastcall IterateUnknown(CClass ***a2, CClass ***a3);

    // 1.52 RVA: 0xA86120 / 11034912
    /// @pattern 4C 8B DC 4D 89 43 18 49 89 53 10 56 48 81 EC B0 00 00 00 8B 84 24 E0 00 00 00 48 8B F2 44 3B C8
    void *__fastcall PrepareFiring(__int64 a2, int *a3, unsigned int a4, unsigned int a5);

    // 1.52 RVA: 0xA855E0 / 11032032
    /// @pattern 48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 41 54 41 55 41 56 41 57 48 83 EC 30 48 8B F1 48
    UpdateManager *__fastcall Setup();

    // one for each Unk0
    DynArray<UpdateStorage> storage[13];
    uint32_t arrayCount;
    uint32_t unkD4;
    // don't seem to be assigned
    UpdateEntry *unkD8[24];
    uint32_t count0;
    uint32_t unk19C;
    UpdateEntry *entries0[13];
    uint32_t count1;
    uint32_t unk20C;
    UpdateEntry *entries1[12];
    uint32_t count2;
    uint32_t unk274;
    UpdateEntry *entries2[3];
    uint32_t count3;
    uint32_t count4;
};

struct UpdateManagerHolder {
    UpdateManager * UpdateManager;
    void * unk08;
    uint8_t unk09;

    // 1.52 RVA: 0xA862E0 / 11035360
    // Sets some sizes & iterates through buckets
    /// @pattern 48 89 5C 24 18 57 48 83 EC 30 48 8B 19 48 8B F9 48 8D 4C 24 48 48 8B 53 40 44 8B 43 4C 49 C1 E0
    __int64 __fastcall Something();

};

struct __declspec(align(8)) UpdateLog
{
    struct Unk08
    {
        CGameFramework *framework;
        void *unk08;
        uint8_t functionalTestsMode;
        uint8_t headless;
        uint8_t automator;
        uint8_t unk13;
        uint32_t unk14;
        CString engineName;
        uint64_t unk38;
    };

  void *func;
  Unk08 *unk08;
  UpdateEntry *entry;
  uint32_t unk18;
  uint8_t unk1C;
  CGameFramework *framework;
  uint8_t unk28;
};


} // namespace RED4ext
