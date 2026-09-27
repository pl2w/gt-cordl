#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/WitResponseData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WitResponseData)
// Forward declare root types
namespace Meta::WitAi::Json {
class WitResponseData;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Json::WitResponseData*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::WitResponseData*, "Meta.WitAi.Json", "WitResponseData");
// Dependencies Meta.WitAi.Json.WitResponseNode
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.WitResponseData
class CORDL_TYPE WitResponseData : public ::Meta::WitAi::Json::WitResponseNode {
public:
// Declarations
 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

/// @brief Field m_Data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Data, put=__cordl_internal_set_m_Data)) ::StringW  m_Data;

static inline ::Meta::WitAi::Json::WitResponseData* New_ctor(::StringW  aData) ;

static inline ::Meta::WitAi::Json::WitResponseData* New_ctor(bool  aData) ;

static inline ::Meta::WitAi::Json::WitResponseData* New_ctor(double_t  aData) ;

static inline ::Meta::WitAi::Json::WitResponseData* New_ctor(float_t  aData) ;

static inline ::Meta::WitAi::Json::WitResponseData* New_ctor(int32_t  aData) ;

/// @brief Method ToString, addr 0x9e470c8, size 0x58, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_m_Data() const;

constexpr ::StringW& __cordl_internal_get_m_Data() ;

constexpr void __cordl_internal_set_m_Data(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e3f9fc, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  aData) ;

/// @brief Method .ctor, addr 0x9e4351c, size 0x38, virtual false, abstract: false, final false
inline void _ctor(bool  aData) ;

/// @brief Method .ctor, addr 0x9e435c4, size 0x38, virtual false, abstract: false, final false
inline void _ctor(double_t  aData) ;

/// @brief Method .ctor, addr 0x9e4358c, size 0x38, virtual false, abstract: false, final false
inline void _ctor(float_t  aData) ;

/// @brief Method .ctor, addr 0x9e43554, size 0x38, virtual false, abstract: false, final false
inline void _ctor(int32_t  aData) ;

/// @brief Method get_Value, addr 0x9e470b8, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method set_Value, addr 0x9e470c0, size 0x8, virtual true, abstract: false, final false
inline void set_Value(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitResponseData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitResponseData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitResponseData(WitResponseData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitResponseData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitResponseData(WitResponseData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31032};

/// @brief Field m_Data, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Json::WitResponseData, ___m_Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Json::WitResponseData) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi::Json
