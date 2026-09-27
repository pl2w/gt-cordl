#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerLoopPruning.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerLoopPruning)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace UnityEngine::LowLevel {
struct PlayerLoopSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerLoopPruning;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerLoopPruning*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerLoopPruning*, "", "PlayerLoopPruning");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerLoopPruning
class CORDL_TYPE PlayerLoopPruning : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field androidSubsystemExtras, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_androidSubsystemExtras, put=__cordl_internal_set_androidSubsystemExtras)) ::System::Collections::Generic::List_1<::StringW>*  androidSubsystemExtras;

/// @brief Field isAndroid, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAndroid, put=__cordl_internal_set_isAndroid)) bool  isAndroid;

/// @brief Field removeSubsystemList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_removeSubsystemList, put=__cordl_internal_set_removeSubsystemList)) ::System::Collections::Generic::List_1<::StringW>*  removeSubsystemList;

/// @brief Field slop, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_slop, put=setStaticF_slop)) float_t  slop;

/// @brief Field sw, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sw, put=setStaticF_sw)) ::System::Diagnostics::Stopwatch*  sw;

static inline ::GlobalNamespace::PlayerLoopPruning* New_ctor() ;

/// @brief Method PhaseSyncDestroyer3000End, addr 0x5712550, size 0x190, virtual false, abstract: false, final false
static inline void PhaseSyncDestroyer3000End() ;

/// @brief Method PhaseSyncDestroyer3000Start, addr 0x57124a0, size 0xb0, virtual false, abstract: false, final false
static inline void PhaseSyncDestroyer3000Start() ;

/// @brief Method RemoveSystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::UnityEngine::LowLevel::PlayerLoopSystem RemoveSystem(/* [IsReadOnly] */ ::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  loopSystem) ;

/// @brief Method Start, addr 0x57123c4, size 0xdc, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_androidSubsystemExtras() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_androidSubsystemExtras() ;

constexpr bool const& __cordl_internal_get_isAndroid() const;

constexpr bool& __cordl_internal_get_isAndroid() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_removeSubsystemList() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_removeSubsystemList() ;

constexpr void __cordl_internal_set_androidSubsystemExtras(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_isAndroid(bool  value) ;

constexpr void __cordl_internal_set_removeSubsystemList(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x57126e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_slop() ;

static inline ::System::Diagnostics::Stopwatch* getStaticF_sw() ;

static inline void setStaticF_slop(float_t  value) ;

static inline void setStaticF_sw(::System::Diagnostics::Stopwatch*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerLoopPruning() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerLoopPruning", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerLoopPruning(PlayerLoopPruning && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLoopPruning", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerLoopPruning(PlayerLoopPruning const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1180};

/// @brief Field removeSubsystemList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___removeSubsystemList;

/// @brief Field androidSubsystemExtras, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___androidSubsystemExtras;

/// @brief Field isAndroid, offset: 0x30, size: 0x1, def value: None
 bool  ___isAndroid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerLoopPruning, ___removeSubsystemList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLoopPruning, ___androidSubsystemExtras) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLoopPruning, ___isAndroid) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerLoopPruning) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
