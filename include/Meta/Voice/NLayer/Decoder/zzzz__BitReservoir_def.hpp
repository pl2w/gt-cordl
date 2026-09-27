#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/Decoder/BitReservoir.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitReservoir)
namespace Meta::Voice::NLayer {
class IMpegFrame;
}
// Forward declare root types
namespace Meta::Voice::NLayer::Decoder {
class BitReservoir;
}
// Write type traits
MARK_REF_T(::Meta::Voice::NLayer::Decoder::BitReservoir*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::NLayer::Decoder::BitReservoir*, "Meta.Voice.NLayer.Decoder", "BitReservoir");
// Dependencies System.Object
namespace Meta::Voice::NLayer::Decoder {
// Is value type: false
// CS Name: Meta.Voice.NLayer.Decoder.BitReservoir
class CORDL_TYPE BitReservoir : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BitsAvailable)) int32_t  BitsAvailable;

 __declspec(property(get=get_BitsRead)) int64_t  BitsRead;

/// @brief Field _bitsLeft, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__bitsLeft, put=__cordl_internal_set__bitsLeft)) int32_t  _bitsLeft;

/// @brief Field _bitsRead, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__bitsRead, put=__cordl_internal_set__bitsRead)) int64_t  _bitsRead;

/// @brief Field _buf, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__buf, put=__cordl_internal_set__buf)) ::ArrayW<uint8_t>  _buf;

/// @brief Field _end, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__end, put=__cordl_internal_set__end)) int32_t  _end;

/// @brief Field _start, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__start, put=__cordl_internal_set__start)) int32_t  _start;

/// @brief Method AddBits, addr 0x9e0620c, size 0x1ec, virtual false, abstract: false, final false
inline bool AddBits(::Meta::Voice::NLayer::IMpegFrame*  frame, int32_t  overlap) ;

/// @brief Method Get1Bit, addr 0x9e0673c, size 0xd8, virtual false, abstract: false, final false
inline int32_t Get1Bit() ;

/// @brief Method GetBits, addr 0x9e063f8, size 0x98, virtual false, abstract: false, final false
inline int32_t GetBits(int32_t  count) ;

/// @brief Method GetSlots, addr 0x9e05f40, size 0x2cc, virtual false, abstract: false, final false
static inline int32_t GetSlots(::Meta::Voice::NLayer::IMpegFrame*  frame) ;

static inline ::Meta::Voice::NLayer::Decoder::BitReservoir* New_ctor() ;

/// @brief Method RewindBits, addr 0x9e06860, size 0x84, virtual false, abstract: false, final false
inline void RewindBits(int32_t  count) ;

/// @brief Method SkipBits, addr 0x9e0666c, size 0xd0, virtual false, abstract: false, final false
inline void SkipBits(int32_t  count) ;

/// @brief Method TryPeekBits, addr 0x9e06490, size 0x1dc, virtual false, abstract: false, final false
inline int32_t TryPeekBits(int32_t  count, ::by_ref<int32_t>  readCount) ;

constexpr int32_t const& __cordl_internal_get__bitsLeft() const;

constexpr int32_t& __cordl_internal_get__bitsLeft() ;

constexpr int64_t const& __cordl_internal_get__bitsRead() const;

constexpr int64_t& __cordl_internal_get__bitsRead() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__buf() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__buf() ;

constexpr int32_t const& __cordl_internal_get__end() const;

constexpr int32_t& __cordl_internal_get__end() ;

constexpr int32_t const& __cordl_internal_get__start() const;

constexpr int32_t& __cordl_internal_get__start() ;

constexpr void __cordl_internal_set__bitsLeft(int32_t  value) ;

constexpr void __cordl_internal_set__bitsRead(int64_t  value) ;

constexpr void __cordl_internal_set__buf(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__end(int32_t  value) ;

constexpr void __cordl_internal_set__start(int32_t  value) ;

/// @brief Method .ctor, addr 0x9e068e4, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BitsAvailable, addr 0x9e06814, size 0x44, virtual false, abstract: false, final false
inline int32_t get_BitsAvailable() ;

/// @brief Method get_BitsRead, addr 0x9e06858, size 0x8, virtual false, abstract: false, final false
inline int64_t get_BitsRead() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitReservoir() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitReservoir", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BitReservoir(BitReservoir && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitReservoir", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitReservoir(BitReservoir const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31384};

/// @brief Field _buf, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____buf;

/// @brief Field _start, offset: 0x18, size: 0x4, def value: None
 int32_t  ____start;

/// @brief Field _end, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____end;

/// @brief Field _bitsLeft, offset: 0x20, size: 0x4, def value: None
 int32_t  ____bitsLeft;

/// @brief Field _bitsRead, offset: 0x28, size: 0x8, def value: None
 int64_t  ____bitsRead;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::NLayer::Decoder::BitReservoir, ____buf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::BitReservoir, ____start) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::BitReservoir, ____end) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::BitReservoir, ____bitsLeft) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::BitReservoir, ____bitsRead) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::NLayer::Decoder::BitReservoir) == 0x30, "Size mismatch!");

} // namespace end def Meta::Voice::NLayer::Decoder
