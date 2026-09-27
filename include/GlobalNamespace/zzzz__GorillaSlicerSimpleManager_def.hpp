#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSlicerSimpleManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaSlicerSimpleManager)
namespace GlobalNamespace {
struct GorillaSlicerSimpleManager_UpdateStep;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaSlicerSimpleManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaSlicerSimpleManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaSlicerSimpleManager*, "", "GorillaSlicerSimpleManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaSlicerSimpleManager
class CORDL_TYPE GorillaSlicerSimpleManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using UpdateStep = ::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep;

/// @brief Field fixedUpdateSlice, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_fixedUpdateSlice, put=__cordl_internal_set_fixedUpdateSlice)) ::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>*  fixedUpdateSlice;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::GorillaSlicerSimpleManager>  instance;

/// @brief Field lastRunTicks, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastRunTicks, put=__cordl_internal_set_lastRunTicks)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IGorillaSliceableSimple*,int64_t>*  lastRunTicks;

/// @brief Field lateUpdateSlice, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lateUpdateSlice, put=__cordl_internal_set_lateUpdateSlice)) ::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>*  lateUpdateSlice;

/// @brief Field sW, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_sW, put=__cordl_internal_set_sW)) ::System::Diagnostics::Stopwatch*  sW;

/// @brief Field startingIndex, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingIndex, put=__cordl_internal_set_startingIndex)) int32_t  startingIndex;

/// @brief Field ticksPerFrame, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ticksPerFrame, put=__cordl_internal_set_ticksPerFrame)) int64_t  ticksPerFrame;

/// @brief Field ticksThisFrame, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ticksThisFrame, put=__cordl_internal_set_ticksThisFrame)) int64_t  ticksThisFrame;

/// @brief Field updateIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateIndex, put=__cordl_internal_set_updateIndex)) int32_t  updateIndex;

/// @brief Field updateSlice, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateSlice, put=__cordl_internal_set_updateSlice)) ::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>*  updateSlice;

/// @brief Method Awake, addr 0x59239dc, size 0xb4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateManager, addr 0x5923b70, size 0x174, virtual false, abstract: false, final false
static inline void CreateManager() ;

/// @brief Method FixedUpdate, addr 0x59240e0, size 0x394, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method LateUpdate, addr 0x59247e0, size 0x378, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::GorillaSlicerSimpleManager* New_ctor() ;

/// @brief Method RegisterSliceable, addr 0x5923ce4, size 0x8, virtual false, abstract: false, final false
static inline void RegisterSliceable(::GlobalNamespace::IGorillaSliceableSimple*  gSS) ;

/// @brief Method RegisterSliceable, addr 0x5923cec, size 0x224, virtual false, abstract: false, final false
static inline void RegisterSliceable(::GlobalNamespace::IGorillaSliceableSimple*  gSS, ::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep  step) ;

/// @brief Method SetInstance, addr 0x5923a90, size 0xe0, virtual false, abstract: false, final false
static inline void SetInstance(::GlobalNamespace::GorillaSlicerSimpleManager*  manager) ;

/// @brief Method UnregisterSliceable, addr 0x5923f10, size 0x40, virtual false, abstract: false, final false
static inline bool UnregisterSliceable(::GlobalNamespace::IGorillaSliceableSimple*  gSS) ;

/// @brief Method UnregisterSliceable, addr 0x5923f50, size 0x190, virtual false, abstract: false, final false
static inline bool UnregisterSliceable(::GlobalNamespace::IGorillaSliceableSimple*  gSS, ::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep  step) ;

/// @brief Method Update, addr 0x5924474, size 0x36c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>* const& __cordl_internal_get_fixedUpdateSlice() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>*& __cordl_internal_get_fixedUpdateSlice() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IGorillaSliceableSimple*,int64_t>* const& __cordl_internal_get_lastRunTicks() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IGorillaSliceableSimple*,int64_t>*& __cordl_internal_get_lastRunTicks() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>* const& __cordl_internal_get_lateUpdateSlice() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>*& __cordl_internal_get_lateUpdateSlice() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_sW() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_sW() ;

constexpr int32_t const& __cordl_internal_get_startingIndex() const;

constexpr int32_t& __cordl_internal_get_startingIndex() ;

constexpr int64_t const& __cordl_internal_get_ticksPerFrame() const;

constexpr int64_t& __cordl_internal_get_ticksPerFrame() ;

constexpr int64_t const& __cordl_internal_get_ticksThisFrame() const;

constexpr int64_t& __cordl_internal_get_ticksThisFrame() ;

constexpr int32_t const& __cordl_internal_get_updateIndex() const;

constexpr int32_t& __cordl_internal_get_updateIndex() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>* const& __cordl_internal_get_updateSlice() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>*& __cordl_internal_get_updateSlice() ;

constexpr void __cordl_internal_set_fixedUpdateSlice(::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>*  value) ;

constexpr void __cordl_internal_set_lastRunTicks(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IGorillaSliceableSimple*,int64_t>*  value) ;

constexpr void __cordl_internal_set_lateUpdateSlice(::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>*  value) ;

constexpr void __cordl_internal_set_sW(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_startingIndex(int32_t  value) ;

constexpr void __cordl_internal_set_ticksPerFrame(int64_t  value) ;

constexpr void __cordl_internal_set_ticksThisFrame(int64_t  value) ;

constexpr void __cordl_internal_set_updateIndex(int32_t  value) ;

constexpr void __cordl_internal_set_updateSlice(::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>*  value) ;

/// @brief Method .ctor, addr 0x5924b58, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GlobalNamespace::GorillaSlicerSimpleManager> getStaticF_instance() ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::GorillaSlicerSimpleManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaSlicerSimpleManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaSlicerSimpleManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaSlicerSimpleManager(GorillaSlicerSimpleManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaSlicerSimpleManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaSlicerSimpleManager(GorillaSlicerSimpleManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2216};

/// @brief Field fixedUpdateSlice, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>*  ___fixedUpdateSlice;

/// @brief Field updateSlice, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>*  ___updateSlice;

/// @brief Field lateUpdateSlice, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IGorillaSliceableSimple*>*  ___lateUpdateSlice;

/// @brief Field ticksPerFrame, offset: 0x38, size: 0x8, def value: None
 int64_t  ___ticksPerFrame;

/// @brief Field ticksThisFrame, offset: 0x40, size: 0x8, def value: None
 int64_t  ___ticksThisFrame;

/// @brief Field updateIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ___updateIndex;

/// @brief Field startingIndex, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___startingIndex;

/// @brief Field sW, offset: 0x50, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___sW;

/// @brief Field lastRunTicks, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IGorillaSliceableSimple*,int64_t>*  ___lastRunTicks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaSlicerSimpleManager, ___fixedUpdateSlice) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSlicerSimpleManager, ___updateSlice) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSlicerSimpleManager, ___lateUpdateSlice) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSlicerSimpleManager, ___ticksPerFrame) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSlicerSimpleManager, ___ticksThisFrame) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSlicerSimpleManager, ___updateIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSlicerSimpleManager, ___startingIndex) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSlicerSimpleManager, ___sW) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSlicerSimpleManager, ___lastRunTicks) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaSlicerSimpleManager) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
