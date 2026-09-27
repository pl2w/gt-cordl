#pragma once
// IWYU pragma private; include "System/ComponentModel/ContainerFilterService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ContainerFilterService)
namespace System::ComponentModel {
class ComponentCollection;
}
// Forward declare root types
namespace System::ComponentModel {
class ContainerFilterService;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::ContainerFilterService*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::ContainerFilterService*, "System.ComponentModel", "ContainerFilterService");
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ContainerFilterService
class CORDL_TYPE ContainerFilterService : public ::System::Object {
public:
// Declarations
/// @brief Method FilterComponents, addr 0xad4cbd4, size 0x8, virtual true, abstract: false, final false
inline ::System::ComponentModel::ComponentCollection* FilterComponents(::System::ComponentModel::ComponentCollection*  components) ;

static inline ::System::ComponentModel::ContainerFilterService* New_ctor() ;

/// @brief Method .ctor, addr 0xad4cbcc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContainerFilterService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContainerFilterService", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContainerFilterService(ContainerFilterService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContainerFilterService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContainerFilterService(ContainerFilterService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10135};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::ContainerFilterService) == 0x10, "Size mismatch!");

} // namespace end def System::ComponentModel
