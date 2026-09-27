#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/SprayCanCosmeticNetworked.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SprayCanCosmeticNetworked)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RubberDuckEvents;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class SprayCanCosmeticNetworked;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::SprayCanCosmeticNetworked*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::SprayCanCosmeticNetworked*, "GorillaTag.Cosmetics", "SprayCanCosmeticNetworked");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.SprayCanCosmeticNetworked
class CORDL_TYPE SprayCanCosmeticNetworked : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field HandleOnShakeEnd, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_HandleOnShakeEnd, put=__cordl_internal_set_HandleOnShakeEnd)) ::UnityEngine::Events::UnityEvent*  HandleOnShakeEnd;

/// @brief Field HandleOnShakeStart, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_HandleOnShakeStart, put=__cordl_internal_set_HandleOnShakeStart)) ::UnityEngine::Events::UnityEvent*  HandleOnShakeStart;

/// @brief Field _events, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field callLimiter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callLimiter, put=__cordl_internal_set_callLimiter)) ::GlobalNamespace::CallLimiter*  callLimiter;

/// @brief Field transferrableObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferrableObject, put=__cordl_internal_set_transferrableObject)) ::UnityW<::GlobalNamespace::TransferrableObject>  transferrableObject;

static inline ::GorillaTag::Cosmetics::SprayCanCosmeticNetworked* New_ctor() ;

/// @brief Method OnDisable, addr 0x5da2624, size 0x174, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5da2398, size 0x28c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnShakeEnd, addr 0x5da2aa0, size 0x19c, virtual false, abstract: false, final false
inline void OnShakeEnd() ;

/// @brief Method OnShakeEvent, addr 0x5da2798, size 0x168, virtual false, abstract: false, final false
inline void OnShakeEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnShakeStart, addr 0x5da2900, size 0x1a0, virtual false, abstract: false, final false
inline void OnShakeStart() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_HandleOnShakeEnd() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_HandleOnShakeEnd() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_HandleOnShakeStart() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_HandleOnShakeStart() ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_callLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_callLimiter() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_transferrableObject() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_transferrableObject() ;

constexpr void __cordl_internal_set_HandleOnShakeEnd(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_HandleOnShakeStart(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

/// @brief Method .ctor, addr 0x5da2c3c, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SprayCanCosmeticNetworked() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SprayCanCosmeticNetworked", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SprayCanCosmeticNetworked(SprayCanCosmeticNetworked && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SprayCanCosmeticNetworked", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SprayCanCosmeticNetworked(SprayCanCosmeticNetworked const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4973};

/// [SerializeField]
/// @brief Field transferrableObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___transferrableObject;

/// @brief Field _events, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// @brief Field callLimiter, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___callLimiter;

/// @brief Field HandleOnShakeStart, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___HandleOnShakeStart;

/// @brief Field HandleOnShakeEnd, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___HandleOnShakeEnd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::SprayCanCosmeticNetworked, ___transferrableObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SprayCanCosmeticNetworked, ____events) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SprayCanCosmeticNetworked, ___callLimiter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SprayCanCosmeticNetworked, ___HandleOnShakeStart) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::SprayCanCosmeticNetworked, ___HandleOnShakeEnd) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::SprayCanCosmeticNetworked) == 0x48, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
