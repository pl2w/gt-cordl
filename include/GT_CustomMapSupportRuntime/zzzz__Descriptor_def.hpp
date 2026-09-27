#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/Descriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Descriptor)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class Descriptor;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::Descriptor*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::Descriptor*, "GT_CustomMapSupportRuntime", "Descriptor");
// [Preserve]
// Dependencies System.Object
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.Descriptor
class CORDL_TYPE Descriptor : public ::System::Object {
public:
// Declarations
/// @brief Field objectName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectName, put=__cordl_internal_set_objectName)) ::StringW  objectName;

/// @brief [JsonConstructor]
static inline ::GT_CustomMapSupportRuntime::Descriptor* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_objectName() const;

constexpr ::StringW& __cordl_internal_get_objectName() ;

constexpr void __cordl_internal_set_objectName(::StringW  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cb6c30, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Descriptor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Descriptor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Descriptor(Descriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Descriptor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Descriptor(Descriptor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30895};

/// [Nullable(1)]
/// [JsonProperty(PropertyName = "objectName")]
/// @brief Field objectName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___objectName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::Descriptor, ___objectName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::Descriptor) == 0x18, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
