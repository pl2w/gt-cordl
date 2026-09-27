#pragma once
// IWYU pragma private; include "GlobalNamespace/VerifyAgeRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__KIDRequestData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPlatform_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VerifyAgeRequest)
// Forward declare root types
namespace GlobalNamespace {
class VerifyAgeRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VerifyAgeRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VerifyAgeRequest*, "", "VerifyAgeRequest");
// Dependencies KIDRequestData, PlayerPlatform, System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: VerifyAgeRequest
class CORDL_TYPE VerifyAgeRequest : public ::GlobalNamespace::KIDRequestData {
public:
// Declarations
/// @brief Field Age, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_Age, put=__cordl_internal_set_Age)) ::System::Nullable_1<int32_t>  Age;

/// @brief Field Platform, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_Platform, put=__cordl_internal_set_Platform)) ::System::Nullable_1<::GlobalNamespace::PlayerPlatform>  Platform;

static inline ::GlobalNamespace::VerifyAgeRequest* New_ctor() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_Age() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_Age() ;

constexpr ::System::Nullable_1<::GlobalNamespace::PlayerPlatform> const& __cordl_internal_get_Platform() const;

constexpr ::System::Nullable_1<::GlobalNamespace::PlayerPlatform>& __cordl_internal_get_Platform() ;

constexpr void __cordl_internal_set_Age(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_Platform(::System::Nullable_1<::GlobalNamespace::PlayerPlatform>  value) ;

/// @brief Method .ctor, addr 0x5a262ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VerifyAgeRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VerifyAgeRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VerifyAgeRequest(VerifyAgeRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VerifyAgeRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VerifyAgeRequest(VerifyAgeRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2889};

/// @brief Field Age, offset: 0x10, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___Age;

/// @brief Field Platform, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::GlobalNamespace::PlayerPlatform>  ___Platform;

/// @brief Size padding 0x20 - 0x30 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VerifyAgeRequest, ___Age) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerifyAgeRequest, ___Platform) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VerifyAgeRequest) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
