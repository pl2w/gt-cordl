#pragma once
// IWYU pragma private; include "Photon/Pun/ConnectMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectMethod)
// Forward declare root types
namespace Photon::Pun {
struct ConnectMethod;
}
// Write type traits
MARK_VAL_T(::Photon::Pun::ConnectMethod);
DEFINE_IL2CPP_CLASS(::Photon::Pun::ConnectMethod, "Photon.Pun", "ConnectMethod");
// Dependencies 
namespace Photon::Pun {
// Is value type: true
// CS Name: Photon.Pun.ConnectMethod
struct CORDL_TYPE ConnectMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConnectMethod_Unwrapped
enum struct __ConnectMethod_Unwrapped : int32_t {
__E_NotCalled = static_cast<int32_t>(0x0),
__E_ConnectToMaster = static_cast<int32_t>(0x1),
__E_ConnectToRegion = static_cast<int32_t>(0x2),
__E_ConnectToBest = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConnectMethod_Unwrapped () const noexcept {
return static_cast<__ConnectMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConnectMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ConnectMethod(int32_t  value__) noexcept;

/// @brief Field ConnectToBest value: I32(3)
static ::Photon::Pun::ConnectMethod const ConnectToBest;

/// @brief Field ConnectToMaster value: I32(1)
static ::Photon::Pun::ConnectMethod const ConnectToMaster;

/// @brief Field ConnectToRegion value: I32(2)
static ::Photon::Pun::ConnectMethod const ConnectToRegion;

/// @brief Field NotCalled value: I32(0)
static ::Photon::Pun::ConnectMethod const NotCalled;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29687};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::ConnectMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::ConnectMethod) == 0x4, "Size mismatch!");

} // namespace end def Photon::Pun
