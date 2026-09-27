#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/OnSerializingAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(OnSerializingAttribute)
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class OnSerializingAttribute;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::OnSerializingAttribute*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::OnSerializingAttribute*, "SouthPointe.Serialization.MessagePack", "OnSerializingAttribute");
// [AttributeUsage((System.AttributeTargets)64, Inherited = false)]
// Dependencies System.Attribute
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.OnSerializingAttribute
class CORDL_TYPE OnSerializingAttribute : public ::System::Attribute {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnSerializingAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnSerializingAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnSerializingAttribute(OnSerializingAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnSerializingAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnSerializingAttribute(OnSerializingAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31734};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::SouthPointe::Serialization::MessagePack::OnSerializingAttribute) == 0x10, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
