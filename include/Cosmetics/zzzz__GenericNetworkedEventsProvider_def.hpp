#pragma once
// IWYU pragma private; include "Cosmetics/GenericNetworkedEventsProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GenericNetworkedEventsProvider)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
struct GenericNetworkedEventsProvider_EventType;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RubberDuckEvents;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Cosmetics {
class GenericNetworkedEventsProvider;
}
// Write type traits
MARK_REF_T(::Cosmetics::GenericNetworkedEventsProvider*);
DEFINE_IL2CPP_CLASS(::Cosmetics::GenericNetworkedEventsProvider*, "Cosmetics", "GenericNetworkedEventsProvider");
// Dependencies UnityEngine.MonoBehaviour
namespace Cosmetics {
// Is value type: false
// CS Name: Cosmetics.GenericNetworkedEventsProvider
class CORDL_TYPE GenericNetworkedEventsProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EventType = ::GlobalNamespace::GenericNetworkedEventsProvider_EventType;

/// @brief Field _events, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field callLimiter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callLimiter, put=__cordl_internal_set_callLimiter)) ::GlobalNamespace::CallLimiter*  callLimiter;

/// @brief Field myRig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field sharedEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedEvent, put=__cordl_internal_set_sharedEvent)) ::UnityEngine::Events::UnityEvent*  sharedEvent;

/// @brief Field sharedEvent_bool, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedEvent_bool, put=__cordl_internal_set_sharedEvent_bool)) ::UnityEngine::Events::UnityEvent_1<bool>*  sharedEvent_bool;

/// @brief Field sharedEvent_float, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedEvent_float, put=__cordl_internal_set_sharedEvent_float)) ::UnityEngine::Events::UnityEvent_1<float_t>*  sharedEvent_float;

/// @brief Field sharedEvent_int, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedEvent_int, put=__cordl_internal_set_sharedEvent_int)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  sharedEvent_int;

/// @brief Field sharedEvent_long, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedEvent_long, put=__cordl_internal_set_sharedEvent_long)) ::UnityEngine::Events::UnityEvent_1<int64_t>*  sharedEvent_long;

/// @brief Field sharedEvent_quaternion, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedEvent_quaternion, put=__cordl_internal_set_sharedEvent_quaternion)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Quaternion>*  sharedEvent_quaternion;

/// @brief Field sharedEvent_string, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedEvent_string, put=__cordl_internal_set_sharedEvent_string)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  sharedEvent_string;

/// @brief Field sharedEvent_vector3, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedEvent_vector3, put=__cordl_internal_set_sharedEvent_vector3)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  sharedEvent_vector3;

/// @brief Method InvokeSharedEvents, addr 0x5d1e2cc, size 0x440, virtual false, abstract: false, final false
inline void InvokeSharedEvents(::ArrayW<::System::Object*>  args) ;

static inline ::Cosmetics::GenericNetworkedEventsProvider* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d1e074, size 0x138, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d1ddcc, size 0x2a8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Raise, addr 0x5d1e70c, size 0xe8, virtual false, abstract: false, final false
inline void Raise(::ArrayW<::System::Object*>  args) ;

/// @brief Method TriggerSharedEvent, addr 0x5d1e7f4, size 0xc8, virtual false, abstract: false, final false
inline void TriggerSharedEvent() ;

/// @brief Method TriggerSharedEvent_Bool, addr 0x5d1eb04, size 0x124, virtual false, abstract: false, final false
inline void TriggerSharedEvent_Bool(bool  value) ;

/// @brief Method TriggerSharedEvent_Float, addr 0x5d1e9dc, size 0x128, virtual false, abstract: false, final false
inline void TriggerSharedEvent_Float(float_t  value) ;

/// @brief Method TriggerSharedEvent_Int, addr 0x5d1e8bc, size 0x120, virtual false, abstract: false, final false
inline void TriggerSharedEvent_Int(int32_t  value) ;

/// @brief Method TriggerSharedEvent_Long, addr 0x5d1ee7c, size 0x120, virtual false, abstract: false, final false
inline void TriggerSharedEvent_Long(int64_t  value) ;

/// @brief Method TriggerSharedEvent_Quaternion, addr 0x5d1ef9c, size 0x154, virtual false, abstract: false, final false
inline void TriggerSharedEvent_Quaternion(::UnityEngine::Quaternion  value) ;

/// @brief Method TriggerSharedEvent_String, addr 0x5d1ed78, size 0x104, virtual false, abstract: false, final false
inline void TriggerSharedEvent_String(::StringW  value) ;

/// @brief Method TriggerSharedEvent_Vector3, addr 0x5d1ec28, size 0x150, virtual false, abstract: false, final false
inline void TriggerSharedEvent_Vector3(::UnityEngine::Vector3  value) ;

/// @brief Method TriggerSharedEvents, addr 0x5d1e1ac, size 0x120, virtual false, abstract: false, final false
inline void TriggerSharedEvents(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_callLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_callLimiter() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_sharedEvent() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_sharedEvent() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_sharedEvent_bool() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_sharedEvent_bool() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get_sharedEvent_float() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get_sharedEvent_float() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_sharedEvent_int() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_sharedEvent_int() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int64_t>* const& __cordl_internal_get_sharedEvent_long() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int64_t>*& __cordl_internal_get_sharedEvent_long() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Quaternion>* const& __cordl_internal_get_sharedEvent_quaternion() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Quaternion>*& __cordl_internal_get_sharedEvent_quaternion() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>* const& __cordl_internal_get_sharedEvent_string() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>*& __cordl_internal_get_sharedEvent_string() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& __cordl_internal_get_sharedEvent_vector3() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& __cordl_internal_get_sharedEvent_vector3() ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_sharedEvent(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_sharedEvent_bool(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set_sharedEvent_float(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set_sharedEvent_int(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_sharedEvent_long(::UnityEngine::Events::UnityEvent_1<int64_t>*  value) ;

constexpr void __cordl_internal_set_sharedEvent_quaternion(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Quaternion>*  value) ;

constexpr void __cordl_internal_set_sharedEvent_string(::UnityEngine::Events::UnityEvent_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_sharedEvent_vector3(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method .ctor, addr 0x5d1f0f0, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenericNetworkedEventsProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenericNetworkedEventsProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericNetworkedEventsProvider(GenericNetworkedEventsProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericNetworkedEventsProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericNetworkedEventsProvider(GenericNetworkedEventsProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4585};

/// @brief Field _events, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// @brief Field myRig, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field callLimiter, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___callLimiter;

/// @brief Field sharedEvent, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___sharedEvent;

/// @brief Field sharedEvent_int, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___sharedEvent_int;

/// @brief Field sharedEvent_float, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ___sharedEvent_float;

/// @brief Field sharedEvent_bool, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___sharedEvent_bool;

/// @brief Field sharedEvent_vector3, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  ___sharedEvent_vector3;

/// @brief Field sharedEvent_string, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::StringW>*  ___sharedEvent_string;

/// @brief Field sharedEvent_long, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int64_t>*  ___sharedEvent_long;

/// @brief Field sharedEvent_quaternion, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Quaternion>*  ___sharedEvent_quaternion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cosmetics::GenericNetworkedEventsProvider, ____events) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::GenericNetworkedEventsProvider, ___myRig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::GenericNetworkedEventsProvider, ___callLimiter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::GenericNetworkedEventsProvider, ___sharedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::GenericNetworkedEventsProvider, ___sharedEvent_int) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::GenericNetworkedEventsProvider, ___sharedEvent_float) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::GenericNetworkedEventsProvider, ___sharedEvent_bool) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::GenericNetworkedEventsProvider, ___sharedEvent_vector3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::GenericNetworkedEventsProvider, ___sharedEvent_string) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::GenericNetworkedEventsProvider, ___sharedEvent_long) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::GenericNetworkedEventsProvider, ___sharedEvent_quaternion) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Cosmetics::GenericNetworkedEventsProvider) == 0x78, "Size mismatch!");

} // namespace end def Cosmetics
