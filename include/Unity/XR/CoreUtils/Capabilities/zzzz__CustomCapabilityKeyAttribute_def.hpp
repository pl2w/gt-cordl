#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Capabilities/CustomCapabilityKeyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomCapabilityKeyAttribute)
// Forward declare root types
namespace Unity::XR::CoreUtils::Capabilities {
class CustomCapabilityKeyAttribute;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Capabilities::CustomCapabilityKeyAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Capabilities::CustomCapabilityKeyAttribute*, "Unity.XR.CoreUtils.Capabilities", "CustomCapabilityKeyAttribute");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies System.Attribute
namespace Unity::XR::CoreUtils::Capabilities {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Capabilities.CustomCapabilityKeyAttribute
class CORDL_TYPE CustomCapabilityKeyAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field Order, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Order, put=__cordl_internal_set_Order)) int32_t  Order;

static inline ::Unity::XR::CoreUtils::Capabilities::CustomCapabilityKeyAttribute* New_ctor(int32_t  order) ;

constexpr int32_t const& __cordl_internal_get_Order() const;

constexpr int32_t& __cordl_internal_get_Order() ;

constexpr void __cordl_internal_set_Order(int32_t  value) ;

/// @brief Method .ctor, addr 0xb3fd784, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  order) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomCapabilityKeyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomCapabilityKeyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomCapabilityKeyAttribute(CustomCapabilityKeyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomCapabilityKeyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomCapabilityKeyAttribute(CustomCapabilityKeyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30456};

/// @brief Field Order, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Order;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::CoreUtils::Capabilities::CustomCapabilityKeyAttribute, ___Order) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::XR::CoreUtils::Capabilities::CustomCapabilityKeyAttribute) == 0x18, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils::Capabilities
