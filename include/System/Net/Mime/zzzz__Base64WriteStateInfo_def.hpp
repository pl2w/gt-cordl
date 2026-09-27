#pragma once
// IWYU pragma private; include "System/Net/Mime/Base64WriteStateInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Mime/zzzz__WriteStateInfoBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Base64WriteStateInfo)
// Forward declare root types
namespace System::Net::Mime {
class Base64WriteStateInfo;
}
// Write type traits
MARK_REF_T(::System::Net::Mime::Base64WriteStateInfo*);
DEFINE_IL2CPP_CLASS(::System::Net::Mime::Base64WriteStateInfo*, "System.Net.Mime", "Base64WriteStateInfo");
// Dependencies System.Net.Mime.WriteStateInfoBase
namespace System::Net::Mime {
// Is value type: false
// CS Name: System.Net.Mime.Base64WriteStateInfo
class CORDL_TYPE Base64WriteStateInfo : public ::System::Net::Mime::WriteStateInfoBase {
public:
// Declarations
 __declspec(property(get=get_LastBits, put=set_LastBits)) uint8_t  LastBits;

 __declspec(property(get=get_Padding, put=set_Padding)) int32_t  Padding;

/// @brief Field <LastBits>k__BackingField, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__LastBits_k__BackingField, put=__cordl_internal_set__LastBits_k__BackingField)) uint8_t  _LastBits_k__BackingField;

/// @brief Field <Padding>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__Padding_k__BackingField, put=__cordl_internal_set__Padding_k__BackingField)) int32_t  _Padding_k__BackingField;

static inline ::System::Net::Mime::Base64WriteStateInfo* New_ctor() ;

constexpr uint8_t const& __cordl_internal_get__LastBits_k__BackingField() const;

constexpr uint8_t& __cordl_internal_get__LastBits_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Padding_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Padding_k__BackingField() ;

constexpr void __cordl_internal_set__LastBits_k__BackingField(uint8_t  value) ;

constexpr void __cordl_internal_set__Padding_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0xace209c, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_LastBits, addr 0xace2200, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_LastBits() ;

/// [CompilerGenerated]
/// @brief Method get_Padding, addr 0xace21f0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Padding() ;

/// [CompilerGenerated]
/// @brief Method set_LastBits, addr 0xace2208, size 0x8, virtual false, abstract: false, final false
inline void set_LastBits(uint8_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Padding, addr 0xace21f8, size 0x8, virtual false, abstract: false, final false
inline void set_Padding(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Base64WriteStateInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Base64WriteStateInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Base64WriteStateInfo(Base64WriteStateInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Base64WriteStateInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Base64WriteStateInfo(Base64WriteStateInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10870};

/// [CompilerGenerated]
/// @brief Field <Padding>k__BackingField, offset: 0x38, size: 0x4, def value: None
 int32_t  ____Padding_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LastBits>k__BackingField, offset: 0x3c, size: 0x1, def value: None
 uint8_t  ____LastBits_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Mime::Base64WriteStateInfo, ____Padding_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Mime::Base64WriteStateInfo, ____LastBits_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::System::Net::Mime::Base64WriteStateInfo) == 0x40, "Size mismatch!");

} // namespace end def System::Net::Mime
