#pragma once
// IWYU pragma private; include "GorillaNetworking/FeatureFlagData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FeatureFlagData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaNetworking {
class FeatureFlagData;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::FeatureFlagData*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::FeatureFlagData*, "GorillaNetworking", "FeatureFlagData");
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.FeatureFlagData
class CORDL_TYPE FeatureFlagData : public ::System::Object {
public:
// Declarations
/// @brief Field alwaysOnForUsers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_alwaysOnForUsers, put=__cordl_internal_set_alwaysOnForUsers)) ::System::Collections::Generic::List_1<::StringW>*  alwaysOnForUsers;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field value, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) int32_t  value;

/// @brief Field valueType, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_valueType, put=__cordl_internal_set_valueType)) ::StringW  valueType;

static inline ::GorillaNetworking::FeatureFlagData* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_alwaysOnForUsers() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_alwaysOnForUsers() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr int32_t const& __cordl_internal_get_value() const;

constexpr int32_t& __cordl_internal_get_value() ;

constexpr ::StringW const& __cordl_internal_get_valueType() const;

constexpr ::StringW& __cordl_internal_get_valueType() ;

constexpr void __cordl_internal_set_alwaysOnForUsers(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_value(int32_t  value) ;

constexpr void __cordl_internal_set_valueType(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c90440, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FeatureFlagData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FeatureFlagData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FeatureFlagData(FeatureFlagData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FeatureFlagData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FeatureFlagData(FeatureFlagData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4364};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field value, offset: 0x18, size: 0x4, def value: None
 int32_t  ___value;

/// @brief Field valueType, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___valueType;

/// @brief Field alwaysOnForUsers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___alwaysOnForUsers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::FeatureFlagData, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::FeatureFlagData, ___value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::FeatureFlagData, ___valueType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::FeatureFlagData, ___alwaysOnForUsers) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::FeatureFlagData) == 0x30, "Size mismatch!");

} // namespace end def GorillaNetworking
