#pragma once
// IWYU pragma private; include "Fusion/Sockets/ReliableId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__ReliableKey_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReliableId)
// Forward declare root types
namespace Fusion::Sockets {
struct ReliableId;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::ReliableId);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::ReliableId, "Fusion.Sockets", "ReliableId");
// Dependencies Fusion.Sockets.ReliableKey
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.ReliableId
struct CORDL_TYPE ReliableId {
public:
// Declarations
/// @brief Field Key, offset 0x1c, size 0x10 
 __declspec(property(get=__cordl_internal_get_Key, put=__cordl_internal_set_Key)) ::Fusion::Sockets::ReliableKey  Key;

/// @brief Field Sequence, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Sequence, put=__cordl_internal_set_Sequence)) uint64_t  Sequence;

/// @brief Field SliceLength, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_SliceLength, put=__cordl_internal_set_SliceLength)) int32_t  SliceLength;

/// @brief Field Source, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Source, put=__cordl_internal_set_Source)) int32_t  Source;

 __declspec(property(get=get_SourceCombined)) int64_t  SourceCombined;

/// @brief Field SourceSend, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_SourceSend, put=__cordl_internal_set_SourceSend)) int32_t  SourceSend;

/// @brief Field Target, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Target, put=__cordl_internal_set_Target)) int32_t  Target;

/// @brief Field TotalLength, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_TotalLength, put=__cordl_internal_set_TotalLength)) int32_t  TotalLength;

/// @brief Field _padding, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__padding, put=__cordl_internal_set__padding)) int32_t  _padding;

constexpr ::Fusion::Sockets::ReliableKey const& __cordl_internal_get_Key() const;

constexpr ::Fusion::Sockets::ReliableKey& __cordl_internal_get_Key() ;

constexpr uint64_t const& __cordl_internal_get_Sequence() const;

constexpr uint64_t& __cordl_internal_get_Sequence() ;

constexpr int32_t const& __cordl_internal_get_SliceLength() const;

constexpr int32_t& __cordl_internal_get_SliceLength() ;

constexpr int32_t const& __cordl_internal_get_Source() const;

constexpr int32_t& __cordl_internal_get_Source() ;

constexpr int32_t const& __cordl_internal_get_SourceSend() const;

constexpr int32_t& __cordl_internal_get_SourceSend() ;

constexpr int32_t const& __cordl_internal_get_Target() const;

constexpr int32_t& __cordl_internal_get_Target() ;

constexpr int32_t const& __cordl_internal_get_TotalLength() const;

constexpr int32_t& __cordl_internal_get_TotalLength() ;

constexpr int32_t const& __cordl_internal_get__padding() const;

constexpr int32_t& __cordl_internal_get__padding() ;

constexpr void __cordl_internal_set_Key(::Fusion::Sockets::ReliableKey  value) ;

constexpr void __cordl_internal_set_Sequence(uint64_t  value) ;

constexpr void __cordl_internal_set_SliceLength(int32_t  value) ;

constexpr void __cordl_internal_set_Source(int32_t  value) ;

constexpr void __cordl_internal_set_SourceSend(int32_t  value) ;

constexpr void __cordl_internal_set_Target(int32_t  value) ;

constexpr void __cordl_internal_set_TotalLength(int32_t  value) ;

constexpr void __cordl_internal_set__padding(int32_t  value) ;

/// @brief Method get_SourceCombined, addr 0x6033b48, size 0x10, virtual false, abstract: false, final false
inline int64_t get_SourceCombined() ;

// Ctor Parameters []
// @brief default ctor
constexpr ReliableId() ;

// Ctor Parameters [CppParam { name: "Sequence", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SliceLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TotalLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Source", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SourceSend", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Target", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Key", ty: "::Fusion::Sockets::ReliableKey", modifiers: "", def_value: None, comment: None }, CppParam { name: "_padding", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ReliableId(uint64_t  Sequence, int32_t  SliceLength, int32_t  TotalLength, int32_t  Source, int32_t  SourceSend, int32_t  Target, ::Fusion::Sockets::ReliableKey  Key, int32_t  _padding) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Sequence_padding[0x0];
/// @brief Field Sequence, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___Sequence;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Sequence_padding_forAlignment[0x0];
/// @brief Field Sequence, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___Sequence_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___SliceLength_padding[0x8];
/// @brief Field SliceLength, offset: 0x8, size: 0x4, def value: None
 int32_t  ___SliceLength;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___SliceLength_padding_forAlignment[0x8];
/// @brief Field SliceLength, offset: 0x8, size: 0x4, def value: None
 int32_t  ___SliceLength_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___TotalLength_padding[0xc];
/// @brief Field TotalLength, offset: 0xc, size: 0x4, def value: None
 int32_t  ___TotalLength;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___TotalLength_padding_forAlignment[0xc];
/// @brief Field TotalLength, offset: 0xc, size: 0x4, def value: None
 int32_t  ___TotalLength_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___Source_padding[0x10];
/// @brief Field Source, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Source;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___Source_padding_forAlignment[0x10];
/// @brief Field Source, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Source_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x14
 uint8_t  ___SourceSend_padding[0x14];
/// @brief Field SourceSend, offset: 0x14, size: 0x4, def value: None
 int32_t  ___SourceSend;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x14 for alignment
 uint8_t  ___SourceSend_padding_forAlignment[0x14];
/// @brief Field SourceSend, offset: 0x14, size: 0x4, def value: None
 int32_t  ___SourceSend_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ___Target_padding[0x18];
/// @brief Field Target, offset: 0x18, size: 0x4, def value: None
 int32_t  ___Target;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ___Target_padding_forAlignment[0x18];
/// @brief Field Target, offset: 0x18, size: 0x4, def value: None
 int32_t  ___Target_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1c
 uint8_t  ___Key_padding[0x1c];
/// @brief Field Key, offset: 0x1c, size: 0x10, def value: None
 ::Fusion::Sockets::ReliableKey  ___Key;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1c for alignment
 uint8_t  ___Key_padding_forAlignment[0x1c];
/// @brief Field Key, offset: 0x1c, size: 0x10, def value: None
 ::Fusion::Sockets::ReliableKey  ___Key_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2c
 uint8_t  ____padding_padding[0x2c];
/// @brief Field _padding, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____padding;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2c for alignment
 uint8_t  ____padding_padding_forAlignment[0x2c];
/// @brief Field _padding, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____padding_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x30)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29387};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::ReliableId) == 0x30, "Size mismatch!");

} // namespace end def Fusion::Sockets
