#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/OnDeserializingAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(OnDeserializingAttribute)
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
class OnDeserializingAttribute;
}
// Write type traits
MARK_REF_T(::SouthPointe::Serialization::MessagePack::OnDeserializingAttribute*);
DEFINE_IL2CPP_CLASS(::SouthPointe::Serialization::MessagePack::OnDeserializingAttribute*, "SouthPointe.Serialization.MessagePack", "OnDeserializingAttribute");
// [AttributeUsage((System.AttributeTargets)64, Inherited = false)]
// Dependencies System.Attribute
namespace SouthPointe::Serialization::MessagePack {
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.OnDeserializingAttribute
class CORDL_TYPE OnDeserializingAttribute : public ::System::Attribute {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnDeserializingAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnDeserializingAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnDeserializingAttribute(OnDeserializingAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnDeserializingAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnDeserializingAttribute(OnDeserializingAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31732};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::SouthPointe::Serialization::MessagePack::OnDeserializingAttribute) == 0x10, "Size mismatch!");

} // namespace end def SouthPointe::Serialization::MessagePack
