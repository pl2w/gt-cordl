#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequestResponse_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRequestResponse_1)
// Forward declare root types
namespace Meta::WitAi::Requests {
template<typename TValue>
struct VRequestResponse_1;
}
// Write type traits
MARK_GEN_VAL_T(::Meta::WitAi::Requests::VRequestResponse_1);
DEFINE_IL2CPP_GEN_CLASS(::Meta::WitAi::Requests::VRequestResponse_1, "Meta.WitAi.Requests", "VRequestResponse`1");
// Dependencies 
namespace Meta::WitAi::Requests {
// cpp template
template<typename TValue>
// Is value type: true
// CS Name: Meta.WitAi.Requests.VRequestResponse`1<TValue>
struct CORDL_TYPE VRequestResponse_1 {
public:
// Declarations
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  code, ::StringW  error) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TValue  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TValue  value, int32_t  code, ::StringW  error) ;

// Ctor Parameters []
// @brief default ctor
constexpr VRequestResponse_1() ;

// Ctor Parameters [CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: None, comment: None }, CppParam { name: "Code", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Error", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr VRequestResponse_1(TValue  Value, int32_t  Code, ::StringW  Error) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25596};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Value, offset: 0x0, size: 0x8, def value: None
 TValue  Value;

/// @brief Field Code, offset: 0x8, size: 0x4, def value: None
 int32_t  Code;

/// @brief Field Error, offset: 0x10, size: 0x8, def value: None
 ::StringW  Error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Requests
