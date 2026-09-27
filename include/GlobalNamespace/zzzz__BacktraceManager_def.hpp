#pragma once
// IWYU pragma private; include "GlobalNamespace/BacktraceManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BacktraceManager)
namespace Backtrace::Unity::Model {
class BacktraceData;
}
namespace GlobalNamespace {
class BacktraceManager___c;
}
namespace PlayFab {
class PlayFabError;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BacktraceManager;
}
namespace GlobalNamespace {
class BacktraceManager___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BacktraceManager*);
MARK_REF_T(::GlobalNamespace::BacktraceManager___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BacktraceManager*, "", "BacktraceManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BacktraceManager___c*, "", "BacktraceManager/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BacktraceManager
class CORDL_TYPE BacktraceManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::BacktraceManager___c;

/// @brief Field backtraceSampleRate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_backtraceSampleRate, put=__cordl_internal_set_backtraceSampleRate)) double_t  backtraceSampleRate;

/// @brief Method Awake, addr 0x5ae1520, size 0xb4, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::BacktraceManager* New_ctor() ;

/// @brief Method Start, addr 0x5ae15d4, size 0x190, virtual false, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <Awake>b__1_0, addr 0x5ae1780, size 0x78, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::BacktraceData* _Awake_b__1_0(::Backtrace::Unity::Model::BacktraceData*  data) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__2_0, addr 0x5ae17f8, size 0x11c, virtual false, abstract: false, final false
inline void _Start_b__2_0(::StringW  data) ;

constexpr double_t const& __cordl_internal_get_backtraceSampleRate() const;

constexpr double_t& __cordl_internal_get_backtraceSampleRate() ;

constexpr void __cordl_internal_set_backtraceSampleRate(double_t  value) ;

/// @brief Method .ctor, addr 0x5ae1764, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceManager(BacktraceManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceManager(BacktraceManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3462};

/// @brief Field backtraceSampleRate, offset: 0x20, size: 0x8, def value: None
 double_t  ___backtraceSampleRate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BacktraceManager, ___backtraceSampleRate) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BacktraceManager) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BacktraceManager/<>c
class CORDL_TYPE BacktraceManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::BacktraceManager___c*  __9;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__2_1;

static inline ::GlobalNamespace::BacktraceManager___c* New_ctor() ;

/// @brief Method <Start>b__2_1, addr 0x5ae1984, size 0x8c, virtual false, abstract: false, final false
inline void _Start_b__2_1(::PlayFab::PlayFabError*  e) ;

/// @brief Method .ctor, addr 0x5ae197c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::BacktraceManager___c* getStaticF___9() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__2_1() ;

static inline void setStaticF___9(::GlobalNamespace::BacktraceManager___c*  value) ;

static inline void setStaticF___9__2_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceManager___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceManager___c(BacktraceManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceManager___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceManager___c(BacktraceManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3461};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BacktraceManager___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
