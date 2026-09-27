#pragma once
// IWYU pragma private; include "System/Security/Authentication/ExtendedProtection/ServiceNameCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ReadOnlyCollectionBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ServiceNameCollection)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace System::Security::Authentication::ExtendedProtection {
class ServiceNameCollection;
}
// Write type traits
MARK_REF_T(::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*);
DEFINE_IL2CPP_CLASS(::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*, "System.Security.Authentication.ExtendedProtection", "ServiceNameCollection");
// Dependencies System.Collections.ReadOnlyCollectionBase
namespace System::Security::Authentication::ExtendedProtection {
// Is value type: false
// CS Name: System.Security.Authentication.ExtendedProtection.ServiceNameCollection
class CORDL_TYPE ServiceNameCollection : public ::System::Collections::ReadOnlyCollectionBase {
public:
// Declarations
/// @brief Method AddIfNew, addr 0xad308d8, size 0xbc, virtual false, abstract: false, final false
static inline void AddIfNew(::System::Collections::ArrayList*  newServiceNames, ::StringW  serviceName) ;

/// @brief Method Contains, addr 0xad30d9c, size 0x2f8, virtual false, abstract: false, final false
static inline bool Contains(::StringW  searchServiceName, ::System::Collections::ICollection*  serviceNames) ;

/// @brief Method Match, addr 0xad31094, size 0x20, virtual false, abstract: false, final false
static inline bool Match(::StringW  serviceName1, ::StringW  serviceName2) ;

static inline ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* New_ctor(::System::Collections::ICollection*  items) ;

/// @brief Method NormalizeServiceName, addr 0xad30994, size 0x408, virtual false, abstract: false, final false
static inline ::StringW NormalizeServiceName(::StringW  inputServiceName) ;

/// @brief Method .ctor, addr 0xad305a4, size 0x334, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::ICollection*  items) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServiceNameCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServiceNameCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ServiceNameCollection(ServiceNameCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServiceNameCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServiceNameCollection(ServiceNameCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10030};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Authentication::ExtendedProtection::ServiceNameCollection) == 0x18, "Size mismatch!");

} // namespace end def System::Security::Authentication::ExtendedProtection
