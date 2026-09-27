#pragma once
// IWYU pragma private; include "UnityEngine/Internal/InputUnsafeUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUnsafeUtility)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine::Internal {
class InputUnsafeUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::Internal::InputUnsafeUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Internal::InputUnsafeUtility*, "UnityEngine.Internal", "InputUnsafeUtility");
// [NativeHeader("Runtime/Input/InputBindings.h")]
// Dependencies System.Object
namespace UnityEngine::Internal {
// Is value type: false
// CS Name: UnityEngine.Internal.InputUnsafeUtility
class CORDL_TYPE InputUnsafeUtility : public ::System::Object {
public:
// Declarations
/// [NativeThrows]
/// @brief Method GetAxis, addr 0xb665f2c, size 0x16c, virtual false, abstract: false, final false
static inline float_t GetAxis(::StringW  axisName) ;

/// [NativeThrows]
/// @brief Method GetAxisRaw, addr 0xb66609c, size 0x16c, virtual false, abstract: false, final false
static inline float_t GetAxisRaw(::StringW  axisName) ;

/// @brief Method GetAxisRaw_Injected, addr 0xb6683b0, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetAxisRaw_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  axisName) ;

/// [NativeThrows]
/// @brief Method GetAxisRaw__Unmanaged, addr 0xb6683ec, size 0x44, virtual false, abstract: false, final false
static inline float_t GetAxisRaw__Unmanaged(uint8_t*  axisName, int32_t  axisNameLen) ;

/// @brief Method GetAxis_Injected, addr 0xb668330, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetAxis_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  axisName) ;

/// [NativeThrows]
/// @brief Method GetAxis__Unmanaged, addr 0xb66836c, size 0x44, virtual false, abstract: false, final false
static inline float_t GetAxis__Unmanaged(uint8_t*  axisName, int32_t  axisNameLen) ;

/// [NativeThrows]
/// @brief Method GetButton, addr 0xb66620c, size 0x174, virtual false, abstract: false, final false
static inline bool GetButton(::StringW  buttonName) ;

/// [NativeThrows]
/// @brief Method GetButtonDown, addr 0xb666384, size 0x174, virtual false, abstract: false, final false
static inline bool GetButtonDown(::StringW  buttonName) ;

/// @brief Method GetButtonDown_Injected, addr 0xb6684b0, size 0x3c, virtual false, abstract: false, final false
static inline bool GetButtonDown_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  buttonName) ;

/// [NativeThrows]
/// @brief Method GetButtonDown__Unmanaged, addr 0xb6684ec, size 0x44, virtual false, abstract: false, final false
static inline uint8_t GetButtonDown__Unmanaged(uint8_t*  buttonName, int32_t  buttonNameLen) ;

/// [NativeThrows]
/// @brief Method GetButtonUp__Unmanaged, addr 0xb668530, size 0x44, virtual false, abstract: false, final false
static inline bool GetButtonUp__Unmanaged(uint8_t*  buttonName, int32_t  buttonNameLen) ;

/// @brief Method GetButton_Injected, addr 0xb668430, size 0x3c, virtual false, abstract: false, final false
static inline bool GetButton_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  buttonName) ;

/// [NativeThrows]
/// @brief Method GetButton__Unmanaged, addr 0xb66846c, size 0x44, virtual false, abstract: false, final false
static inline bool GetButton__Unmanaged(uint8_t*  buttonName, int32_t  buttonNameLen) ;

/// [NativeThrows]
/// @brief Method GetKeyDownString, addr 0xb66681c, size 0x174, virtual false, abstract: false, final false
static inline bool GetKeyDownString(::StringW  name) ;

/// @brief Method GetKeyDownString_Injected, addr 0xb6682b0, size 0x3c, virtual false, abstract: false, final false
static inline bool GetKeyDownString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// [NativeThrows]
/// @brief Method GetKeyDownString__Unmanaged, addr 0xb6682ec, size 0x44, virtual false, abstract: false, final false
static inline bool GetKeyDownString__Unmanaged(uint8_t*  name, int32_t  nameLen) ;

/// [NativeThrows]
/// @brief Method GetKeyString__Unmanaged, addr 0xb668228, size 0x44, virtual false, abstract: false, final false
static inline bool GetKeyString__Unmanaged(uint8_t*  name, int32_t  nameLen) ;

/// [NativeThrows]
/// @brief Method GetKeyUpString__Unmanaged, addr 0xb66826c, size 0x44, virtual false, abstract: false, final false
static inline bool GetKeyUpString__Unmanaged(uint8_t*  name, int32_t  nameLen) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputUnsafeUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputUnsafeUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputUnsafeUtility(InputUnsafeUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputUnsafeUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputUnsafeUtility(InputUnsafeUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32554};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Internal::InputUnsafeUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Internal
