#pragma once
// IWYU pragma private; include "System/ComponentModel/LicFileLicenseProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__LicenseProvider_def.hpp"
#include "System/ComponentModel/zzzz__License_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LicFileLicenseProvider)
namespace System::ComponentModel {
class LicFileLicenseProvider_LicFileLicense;
}
namespace System::ComponentModel {
class LicenseContext;
}
namespace System::ComponentModel {
class License;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class LicFileLicenseProvider;
}
namespace System::ComponentModel {
class LicFileLicenseProvider_LicFileLicense;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::LicFileLicenseProvider*);
MARK_REF_T(::System::ComponentModel::LicFileLicenseProvider_LicFileLicense*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::LicFileLicenseProvider*, "System.ComponentModel", "LicFileLicenseProvider");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::LicFileLicenseProvider_LicFileLicense*, "System.ComponentModel", "LicFileLicenseProvider/LicFileLicense");
// Dependencies System.ComponentModel.LicenseProvider
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.LicFileLicenseProvider
class CORDL_TYPE LicFileLicenseProvider : public ::System::ComponentModel::LicenseProvider {
public:
// Declarations
using LicFileLicense = ::System::ComponentModel::LicFileLicenseProvider_LicFileLicense;

/// @brief Method GetKey, addr 0xad58f08, size 0x9c, virtual true, abstract: false, final false
inline ::StringW GetKey(::System::Type*  type) ;

/// @brief Method GetLicense, addr 0xad58fa4, size 0x3e0, virtual true, abstract: false, final false
inline ::System::ComponentModel::License* GetLicense(::System::ComponentModel::LicenseContext*  context, ::System::Type*  type, ::System::Object*  instance, bool  allowExceptions) ;

/// @brief Method IsKeyValid, addr 0xad58ecc, size 0x3c, virtual true, abstract: false, final false
inline bool IsKeyValid(::StringW  key, ::System::Type*  type) ;

static inline ::System::ComponentModel::LicFileLicenseProvider* New_ctor() ;

/// @brief Method .ctor, addr 0xad593c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LicFileLicenseProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LicFileLicenseProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LicFileLicenseProvider(LicFileLicenseProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LicFileLicenseProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LicFileLicenseProvider(LicFileLicenseProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10189};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::LicFileLicenseProvider) == 0x10, "Size mismatch!");

} // namespace end def System::ComponentModel
// Dependencies System.ComponentModel.License
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.LicFileLicenseProvider/LicFileLicense
class CORDL_TYPE LicFileLicenseProvider_LicFileLicense : public ::System::ComponentModel::License {
public:
// Declarations
 __declspec(property(get=get_LicenseKey)) ::StringW  LicenseKey;

/// @brief Field <LicenseKey>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__LicenseKey_k__BackingField, put=__cordl_internal_set__LicenseKey_k__BackingField)) ::StringW  _LicenseKey_k__BackingField;

/// @brief Field _owner, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__owner, put=__cordl_internal_set__owner)) ::System::ComponentModel::LicFileLicenseProvider*  _owner;

/// @brief Method Dispose, addr 0xad593e8, size 0x58, virtual true, abstract: false, final false
inline void Dispose() ;

static inline ::System::ComponentModel::LicFileLicenseProvider_LicFileLicense* New_ctor(::System::ComponentModel::LicFileLicenseProvider*  owner, ::StringW  key) ;

constexpr ::StringW const& __cordl_internal_get__LicenseKey_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__LicenseKey_k__BackingField() ;

constexpr ::System::ComponentModel::LicFileLicenseProvider* const& __cordl_internal_get__owner() const;

constexpr ::System::ComponentModel::LicFileLicenseProvider*& __cordl_internal_get__owner() ;

constexpr void __cordl_internal_set__LicenseKey_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__owner(::System::ComponentModel::LicFileLicenseProvider*  value) ;

/// @brief Method .ctor, addr 0xad59384, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::System::ComponentModel::LicFileLicenseProvider*  owner, ::StringW  key) ;

/// [CompilerGenerated]
/// @brief Method get_LicenseKey, addr 0xad593e0, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_LicenseKey() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LicFileLicenseProvider_LicFileLicense() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LicFileLicenseProvider_LicFileLicense", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LicFileLicenseProvider_LicFileLicense(LicFileLicenseProvider_LicFileLicense && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LicFileLicenseProvider_LicFileLicense", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LicFileLicenseProvider_LicFileLicense(LicFileLicenseProvider_LicFileLicense const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10188};

/// @brief Field _owner, offset: 0x10, size: 0x8, def value: None
 ::System::ComponentModel::LicFileLicenseProvider*  ____owner;

/// [CompilerGenerated]
/// @brief Field <LicenseKey>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____LicenseKey_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::LicFileLicenseProvider_LicFileLicense, ____owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::LicFileLicenseProvider_LicFileLicense, ____LicenseKey_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::LicFileLicenseProvider_LicFileLicense) == 0x20, "Size mismatch!");

} // namespace end def System::ComponentModel
