#pragma once
// IWYU pragma private; include "Meta/Conduit/ManifestErrorHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ManifestErrorHandler)
namespace Meta::Conduit {
class IManifestMethod;
}
namespace Meta::Conduit {
class ManifestAction;
}
namespace Meta::Conduit {
class ManifestParameter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Conduit {
class ManifestErrorHandler;
}
// Write type traits
MARK_REF_T(::Meta::Conduit::ManifestErrorHandler*);
DEFINE_IL2CPP_CLASS(::Meta::Conduit::ManifestErrorHandler*, "Meta.Conduit", "ManifestErrorHandler");
// Dependencies System.Object
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.ManifestErrorHandler
class CORDL_TYPE ManifestErrorHandler : public ::System::Object {
public:
// Declarations
/// @brief [Preserve]
 __declspec(property(get=get_Assembly, put=set_Assembly)) ::StringW  Assembly;

/// @brief [Preserve]
 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief [Preserve]
 __declspec(property(get=get_Parameters, put=set_Parameters)) ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*  Parameters;

/// @brief Field <Assembly>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Assembly_k__BackingField, put=__cordl_internal_set__Assembly_k__BackingField)) ::StringW  _Assembly_k__BackingField;

/// @brief Field <ID>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ID_k__BackingField, put=__cordl_internal_set__ID_k__BackingField)) ::StringW  _ID_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Field <Parameters>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Parameters_k__BackingField, put=__cordl_internal_set__Parameters_k__BackingField)) ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*  _Parameters_k__BackingField;

/// @brief [Preserve]
 __declspec(property(get=get_ID, put=set_ID)) ::StringW  _cordl_ID;

/// @brief Convert operator to "::Meta::Conduit::IManifestMethod"
constexpr operator  ::Meta::Conduit::IManifestMethod*() noexcept;

/// @brief Method Equals, addr 0x9e21fe0, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x9e2206c, size 0xa4, virtual false, abstract: false, final false
inline bool Equals(::Meta::Conduit::ManifestAction*  other) ;

/// @brief Method GetHashCode, addr 0x9e22110, size 0xa4, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief [Preserve]
static inline ::Meta::Conduit::ManifestErrorHandler* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__Assembly_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Assembly_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ID_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>* const& __cordl_internal_get__Parameters_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*& __cordl_internal_get__Parameters_k__BackingField() ;

constexpr void __cordl_internal_set__Assembly_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ID_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Parameters_k__BackingField(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9e21f18, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Assembly, addr 0x9e21fb0, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Assembly() ;

/// [CompilerGenerated]
/// @brief Method get_ID, addr 0x9e21fa0, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_ID() ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0x9e21fc0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method get_Parameters, addr 0x9e21fd0, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>* get_Parameters() ;

/// @brief Convert to "::Meta::Conduit::IManifestMethod"
constexpr ::Meta::Conduit::IManifestMethod* i___Meta__Conduit__IManifestMethod() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Assembly, addr 0x9e21fb8, size 0x8, virtual true, abstract: false, final true
inline void set_Assembly(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ID, addr 0x9e21fa8, size 0x8, virtual true, abstract: false, final true
inline void set_ID(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Name, addr 0x9e21fc8, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Parameters, addr 0x9e21fd8, size 0x8, virtual true, abstract: false, final true
inline void set_Parameters(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManifestErrorHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManifestErrorHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ManifestErrorHandler(ManifestErrorHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManifestErrorHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManifestErrorHandler(ManifestErrorHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25419};

/// [CompilerGenerated]
/// @brief Field <ID>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____ID_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Assembly>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Assembly_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Parameters>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*  ____Parameters_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Conduit::ManifestErrorHandler, ____ID_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ManifestErrorHandler, ____Assembly_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ManifestErrorHandler, ____Name_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ManifestErrorHandler, ____Parameters_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::Conduit::ManifestErrorHandler) == 0x30, "Size mismatch!");

} // namespace end def Meta::Conduit
