#pragma once
// IWYU pragma private; include "Liv/Lck/LckUpdateManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LckUpdateManager)
namespace Liv::Lck {
class ILckEarlyUpdate;
}
namespace Liv::Lck {
class ILckLateUpdate;
}
namespace UnityEngine::LowLevel {
struct PlayerLoopSystem;
}
// Forward declare root types
namespace Liv::Lck {
class LckUpdateManager;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckUpdateManager*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckUpdateManager*, "Liv.Lck", "LckUpdateManager");
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckUpdateManager
class CORDL_TYPE LckUpdateManager : public ::System::Object {
public:
// Declarations
/// @brief Field _earlyUpdateSystem, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__earlyUpdateSystem, put=setStaticF__earlyUpdateSystem)) ::Liv::Lck::ILckEarlyUpdate*  _earlyUpdateSystem;

/// @brief Field _lateUpdateSystem, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__lateUpdateSystem, put=setStaticF__lateUpdateSystem)) ::Liv::Lck::ILckLateUpdate*  _lateUpdateSystem;

/// @brief Method AddSystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::UnityEngine::LowLevel::PlayerLoopSystem AddSystem(/* [IsReadOnly] */ ::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  loopSystem, ::UnityEngine::LowLevel::PlayerLoopSystem  systemToAdd) ;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method Init, addr 0x9ce998c, size 0x310, virtual false, abstract: false, final false
static inline void Init() ;

/// @brief Method OnEarlyUpdate, addr 0x9ce9c9c, size 0xc0, virtual false, abstract: false, final false
static inline void OnEarlyUpdate() ;

/// @brief Method OnLateUpdate, addr 0x9ce9d5c, size 0xc0, virtual false, abstract: false, final false
static inline void OnLateUpdate() ;

/// @brief Method RegisterSingleEarlyUpdate, addr 0x9ce9824, size 0xf8, virtual false, abstract: false, final false
static inline void RegisterSingleEarlyUpdate(::Liv::Lck::ILckEarlyUpdate*  earlyUpdateSystem) ;

/// @brief Method RegisterSingleLateUpdate, addr 0x9cde618, size 0xf0, virtual false, abstract: false, final false
static inline void RegisterSingleLateUpdate(::Liv::Lck::ILckLateUpdate*  lateUpdateSystem) ;

/// @brief Method RemoveSystem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::LowLevel::PlayerLoopSystem RemoveSystem(/* [IsReadOnly] */ ::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  loopSystem) ;

/// @brief Method UnregisterSingleEarlyUpdate, addr 0x9ce991c, size 0x70, virtual false, abstract: false, final false
static inline void UnregisterSingleEarlyUpdate(::Liv::Lck::ILckEarlyUpdate*  earlyUpdateSystem) ;

/// @brief Method UnregisterSingleLateUpdate, addr 0x9ce0080, size 0x68, virtual false, abstract: false, final false
static inline void UnregisterSingleLateUpdate(::Liv::Lck::ILckLateUpdate*  lateUpdateSystem) ;

static inline ::Liv::Lck::ILckEarlyUpdate* getStaticF__earlyUpdateSystem() ;

static inline ::Liv::Lck::ILckLateUpdate* getStaticF__lateUpdateSystem() ;

static inline void setStaticF__earlyUpdateSystem(::Liv::Lck::ILckEarlyUpdate*  value) ;

static inline void setStaticF__lateUpdateSystem(::Liv::Lck::ILckLateUpdate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckUpdateManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckUpdateManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckUpdateManager(LckUpdateManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckUpdateManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckUpdateManager(LckUpdateManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24750};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::LckUpdateManager) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck
