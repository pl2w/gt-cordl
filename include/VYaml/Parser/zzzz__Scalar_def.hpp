#pragma once
// IWYU pragma private; include "VYaml/Parser/Scalar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Scalar)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace VYaml::Internal {
struct LineBreakState;
}
namespace VYaml::Parser {
class ITokenContent;
}
// Forward declare root types
namespace VYaml::Parser {
class Scalar;
}
// Write type traits
MARK_REF_T(::VYaml::Parser::Scalar*);
DEFINE_IL2CPP_CLASS(::VYaml::Parser::Scalar*, "VYaml.Parser", "Scalar");
// Dependencies System.Object
namespace VYaml::Parser {
// Is value type: false
// CS Name: VYaml.Parser.Scalar
class CORDL_TYPE Scalar : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Length, put=set_Length)) int32_t  Length;

/// @brief Field Null, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::VYaml::Parser::Scalar*  Null;

/// @brief Field <Length>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Length_k__BackingField, put=__cordl_internal_set__Length_k__BackingField)) int32_t  _Length_k__BackingField;

/// @brief Field buffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<uint8_t>  buffer;

/// @brief Convert operator to "::VYaml::Parser::ITokenContent"
constexpr operator  ::VYaml::Parser::ITokenContent*() noexcept;

/// @brief Method AsSpan, addr 0xb958dcc, size 0x94, virtual false, abstract: false, final false
inline ::System::Span_1<uint8_t> AsSpan() ;

/// @brief Method AsSpan, addr 0xb958e60, size 0xb0, virtual false, abstract: false, final false
inline ::System::Span_1<uint8_t> AsSpan(int32_t  start, int32_t  length) ;

/// @brief Method AsUtf8, addr 0xb958f10, size 0xa8, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<uint8_t> AsUtf8() ;

/// @brief Method Clear, addr 0xb9595f4, size 0x8, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Grow, addr 0xb95b8d0, size 0x48, virtual false, abstract: false, final false
inline void Grow() ;

/// @brief Method Grow, addr 0xb95b594, size 0x54, virtual false, abstract: false, final false
inline void Grow(int32_t  sizeHint) ;

/// @brief Method IsNull, addr 0xb959714, size 0x1d4, virtual false, abstract: false, final false
inline bool IsNull() ;

static inline ::VYaml::Parser::Scalar* New_ctor(int32_t  capacity) ;

static inline ::VYaml::Parser::Scalar* New_ctor(::System::ReadOnlySpan_1<uint8_t>  content) ;

/// [NullableContext(1)]
/// @brief Method SequenceEqual, addr 0xb95b350, size 0x170, virtual false, abstract: false, final false
inline bool SequenceEqual(::VYaml::Parser::Scalar*  other) ;

/// @brief Method SequenceEqual, addr 0xb95b4c0, size 0xd4, virtual false, abstract: false, final false
inline bool SequenceEqual(::System::ReadOnlySpan_1<uint8_t>  span) ;

/// @brief Method SetCapacity, addr 0xb95b918, size 0x1d8, virtual false, abstract: false, final false
inline void SetCapacity(int32_t  newCapacity) ;

/// [NullableContext(1)]
/// @brief Method ToString, addr 0xb9595fc, size 0x118, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryDetectHex, addr 0xb95b5e8, size 0x174, virtual false, abstract: false, final false
static inline bool TryDetectHex(::System::ReadOnlySpan_1<uint8_t>  span, ::by_ref<::System::ReadOnlySpan_1<uint8_t>>  slice) ;

/// @brief Method TryDetectHexNegative, addr 0xb95b75c, size 0x174, virtual false, abstract: false, final false
static inline bool TryDetectHexNegative(::System::ReadOnlySpan_1<uint8_t>  span, ::by_ref<::System::ReadOnlySpan_1<uint8_t>>  slice) ;

/// @brief Method TryGetBool, addr 0xb9598e8, size 0x2b8, virtual false, abstract: false, final false
inline bool TryGetBool(::by_ref<bool>  value) ;

/// @brief Method TryGetDouble, addr 0xb95ae84, size 0x4cc, virtual false, abstract: false, final false
inline bool TryGetDouble(::by_ref<double_t>  value) ;

/// @brief Method TryGetFloat, addr 0xb95a9b8, size 0x4cc, virtual false, abstract: false, final false
inline bool TryGetFloat(::by_ref<float_t>  value) ;

/// @brief Method TryGetInt32, addr 0xb959ba0, size 0x2f0, virtual false, abstract: false, final false
inline bool TryGetInt32(::by_ref<int32_t>  value) ;

/// @brief Method TryGetInt64, addr 0xb95a0c0, size 0x454, virtual false, abstract: false, final false
inline bool TryGetInt64(::by_ref<int64_t>  value) ;

/// @brief Method TryGetUInt32, addr 0xb95a514, size 0x25c, virtual false, abstract: false, final false
inline bool TryGetUInt32(::by_ref<uint32_t>  value) ;

/// @brief Method TryGetUInt64, addr 0xb95a770, size 0x248, virtual false, abstract: false, final false
inline bool TryGetUInt64(::by_ref<uint64_t>  value) ;

/// @brief Method TryParseOctal, addr 0xb959e90, size 0x230, virtual false, abstract: false, final false
static inline bool TryParseOctal(::System::ReadOnlySpan_1<uint8_t>  span, ::by_ref<uint64_t>  value) ;

/// @brief Method Write, addr 0xb958fb8, size 0xa4, virtual false, abstract: false, final false
inline void Write(uint8_t  code) ;

/// @brief Method Write, addr 0xb9592a4, size 0x148, virtual false, abstract: false, final false
inline void Write(::System::ReadOnlySpan_1<uint8_t>  codes) ;

/// @brief Method Write, addr 0xb95905c, size 0x248, virtual false, abstract: false, final false
inline void Write(::VYaml::Internal::LineBreakState  lineBreak) ;

/// @brief Method WriteUnicodeCodepoint, addr 0xb9593ec, size 0x208, virtual false, abstract: false, final false
inline void WriteUnicodeCodepoint(int32_t  codepoint) ;

constexpr int32_t const& __cordl_internal_get__Length_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Length_k__BackingField() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_buffer() ;

constexpr void __cordl_internal_set__Length_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0xb958b6c, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0xb958d38, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::System::ReadOnlySpan_1<uint8_t>  content) ;

static inline ::VYaml::Parser::Scalar* getStaticF_Null() ;

/// [CompilerGenerated]
/// @brief Method get_Length, addr 0xb958d28, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Convert to "::VYaml::Parser::ITokenContent"
constexpr ::VYaml::Parser::ITokenContent* i___VYaml__Parser__ITokenContent() noexcept;

static inline void setStaticF_Null(::VYaml::Parser::Scalar*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Length, addr 0xb958d30, size 0x8, virtual false, abstract: false, final false
inline void set_Length(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Scalar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Scalar", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Scalar(Scalar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Scalar", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Scalar(Scalar const& ) = delete;

/// @brief Field GrowFactor offset 0xffffffff size 0x4
static constexpr int32_t  GrowFactor{static_cast<int32_t>(0xc8)};

/// @brief Field MinimumGrow offset 0xffffffff size 0x4
static constexpr int32_t  MinimumGrow{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29010};

/// [CompilerGenerated]
/// @brief Field <Length>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Length_k__BackingField;

/// [Nullable(1)]
/// @brief Field buffer, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Parser::Scalar, ____Length_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Scalar, ___buffer) == 0x18, "Offset mismatch!");

static_assert(sizeof(::VYaml::Parser::Scalar) == 0x20, "Size mismatch!");

} // namespace end def VYaml::Parser
