#pragma once
// IWYU pragma private; include "GlobalNamespace/AppealAgeRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__KIDRequestData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AppealAgeRequest)
// Forward declare root types
namespace GlobalNamespace {
class AppealAgeRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AppealAgeRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AppealAgeRequest*, "", "AppealAgeRequest");
// Dependencies KIDRequestData
namespace GlobalNamespace {
// Is value type: false
// CS Name: AppealAgeRequest
class CORDL_TYPE AppealAgeRequest : public ::GlobalNamespace::KIDRequestData {
public:
// Declarations
/// @brief Field Age, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Age, put=__cordl_internal_set_Age)) int32_t  Age;

/// @brief Field Email, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Email, put=__cordl_internal_set_Email)) ::StringW  Email;

/// @brief Field Locale, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Locale, put=__cordl_internal_set_Locale)) ::StringW  Locale;

static inline ::GlobalNamespace::AppealAgeRequest* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_Age() const;

constexpr int32_t& __cordl_internal_get_Age() ;

constexpr ::StringW const& __cordl_internal_get_Email() const;

constexpr ::StringW& __cordl_internal_get_Email() ;

constexpr ::StringW const& __cordl_internal_get_Locale() const;

constexpr ::StringW& __cordl_internal_get_Locale() ;

constexpr void __cordl_internal_set_Age(int32_t  value) ;

constexpr void __cordl_internal_set_Email(::StringW  value) ;

constexpr void __cordl_internal_set_Locale(::StringW  value) ;

/// @brief Method .ctor, addr 0x5a261e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppealAgeRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppealAgeRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AppealAgeRequest(AppealAgeRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppealAgeRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppealAgeRequest(AppealAgeRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2878};

/// @brief Field Age, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Age;

/// @brief Field Email, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Email;

/// @brief Field Locale, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Locale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AppealAgeRequest, ___Age) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppealAgeRequest, ___Email) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppealAgeRequest, ___Locale) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AppealAgeRequest) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
