#pragma once
// IWYU pragma private; include "System/ComponentModel/InitializationEventAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InitializationEventAttribute)
// Forward declare root types
namespace System::ComponentModel {
class InitializationEventAttribute;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::InitializationEventAttribute*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::InitializationEventAttribute*, "System.ComponentModel", "InitializationEventAttribute");
// [AttributeUsage((System.AttributeTargets)4)]
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.InitializationEventAttribute
class CORDL_TYPE InitializationEventAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_EventName)) ::StringW  EventName;

/// @brief Field <EventName>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__EventName_k__BackingField, put=__cordl_internal_set__EventName_k__BackingField)) ::StringW  _EventName_k__BackingField;

static inline ::System::ComponentModel::InitializationEventAttribute* New_ctor(::StringW  eventName) ;

constexpr ::StringW const& __cordl_internal_get__EventName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__EventName_k__BackingField() ;

constexpr void __cordl_internal_set__EventName_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xad47a98, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  eventName) ;

/// [CompilerGenerated]
/// @brief Method get_EventName, addr 0xad47ac8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_EventName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InitializationEventAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InitializationEventAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InitializationEventAttribute(InitializationEventAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InitializationEventAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InitializationEventAttribute(InitializationEventAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10107};

/// [CompilerGenerated]
/// @brief Field <EventName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____EventName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::InitializationEventAttribute, ____EventName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::InitializationEventAttribute) == 0x18, "Size mismatch!");

} // namespace end def System::ComponentModel
