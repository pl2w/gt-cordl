#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/RingBuffer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RingBuffer_1)
namespace Meta::WitAi::Data {
template<typename T>
class RingBuffer_1_ByteDataWriter;
}
namespace Meta::WitAi::Data {
template<typename T>
class RingBuffer_1_Marker;
}
namespace Meta::WitAi::Data {
template<typename T>
class RingBuffer_1_OnDataAdded;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::Data {
template<typename T>
class RingBuffer_1;
}
namespace Meta::WitAi::Data {
template<typename T>
class RingBuffer_1_ByteDataWriter;
}
namespace Meta::WitAi::Data {
template<typename T>
class RingBuffer_1_Marker;
}
namespace Meta::WitAi::Data {
template<typename T>
class RingBuffer_1_OnDataAdded;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::WitAi::Data::RingBuffer_1);
MARK_GEN_REF_T_PTR(::Meta::WitAi::Data::RingBuffer_1_ByteDataWriter);
MARK_GEN_REF_T_PTR(::Meta::WitAi::Data::RingBuffer_1_Marker);
MARK_GEN_REF_T_PTR(::Meta::WitAi::Data::RingBuffer_1_OnDataAdded);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::Data::RingBuffer_1, "Meta.WitAi.Data", "RingBuffer`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::Data::RingBuffer_1_ByteDataWriter, "Meta.WitAi.Data", "RingBuffer`1/ByteDataWriter");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::Data::RingBuffer_1_Marker, "Meta.WitAi.Data", "RingBuffer`1/Marker");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::Data::RingBuffer_1_OnDataAdded, "Meta.WitAi.Data", "RingBuffer`1/OnDataAdded");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace Meta::WitAi::Data {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Meta.WitAi.Data.RingBuffer`1<T>
class CORDL_TYPE RingBuffer_1 : public ::System::Object {
public:
// Declarations
using ByteDataWriter = ::Meta::WitAi::Data::RingBuffer_1_ByteDataWriter<T>;

using Marker = ::Meta::WitAi::Data::RingBuffer_1_Marker<T>;

using OnDataAdded = ::Meta::WitAi::Data::RingBuffer_1_OnDataAdded<T>;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

/// @brief Field OnDataAddedEvent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDataAddedEvent, put=__cordl_internal_set_OnDataAddedEvent)) ::Meta::WitAi::Data::RingBuffer_1_OnDataAdded<T>*  OnDataAddedEvent;

/// @brief Field buffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<T>  buffer;

/// @brief Field bufferDataLength, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_bufferDataLength, put=__cordl_internal_set_bufferDataLength)) int64_t  bufferDataLength;

/// @brief Field bufferIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_bufferIndex, put=__cordl_internal_set_bufferIndex)) int32_t  bufferIndex;

/// @brief Method CreateMarker, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::WitAi::Data::RingBuffer_1_Marker<T>* CreateMarker(int32_t  offset) ;

/// @brief Method GetBufferArrayIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t GetBufferArrayIndex(int64_t  bufferDataIndex) ;

static inline ::Meta::WitAi::Data::RingBuffer_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method Push, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Push(T  data) ;

/// @brief Method WriteFromBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void WriteFromBuffer(::Meta::WitAi::Data::RingBuffer_1_ByteDataWriter<T>*  writer, int64_t  newBufferIndex, int32_t  length) ;

constexpr ::Meta::WitAi::Data::RingBuffer_1_OnDataAdded<T>* const& __cordl_internal_get_OnDataAddedEvent() const;

constexpr ::Meta::WitAi::Data::RingBuffer_1_OnDataAdded<T>*& __cordl_internal_get_OnDataAddedEvent() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<T>& __cordl_internal_get_buffer() ;

constexpr int64_t const& __cordl_internal_get_bufferDataLength() const;

constexpr int64_t& __cordl_internal_get_bufferDataLength() ;

constexpr int32_t const& __cordl_internal_get_bufferIndex() const;

constexpr int32_t& __cordl_internal_get_bufferIndex() ;

constexpr void __cordl_internal_set_OnDataAddedEvent(::Meta::WitAi::Data::RingBuffer_1_OnDataAdded<T>*  value) ;

constexpr void __cordl_internal_set_buffer(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set_bufferDataLength(int64_t  value) ;

constexpr void __cordl_internal_set_bufferIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RingBuffer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RingBuffer_1(RingBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RingBuffer_1(RingBuffer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25700};

/// @brief Field OnDataAddedEvent, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Data::RingBuffer_1_OnDataAdded<T>*  ___OnDataAddedEvent;

/// @brief Field buffer, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<T>  ___buffer;

/// @brief Field bufferIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___bufferIndex;

/// @brief Field bufferDataLength, offset: 0x28, size: 0x8, def value: None
 int64_t  ___bufferDataLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Data
// Dependencies System.Object
namespace Meta::WitAi::Data {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Meta.WitAi.Data.RingBuffer`1/Marker<T>
class CORDL_TYPE RingBuffer_1_Marker : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AvailableByteCount)) int64_t  AvailableByteCount;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_RequestedByteCount)) int64_t  RequestedByteCount;

 __declspec(property(get=get_RingBuffer)) ::Meta::WitAi::Data::RingBuffer_1<T>*  RingBuffer;

/// @brief Field bufferDataIndex, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_bufferDataIndex, put=__cordl_internal_set_bufferDataIndex)) int64_t  bufferDataIndex;

/// @brief Field index, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field ringBuffer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ringBuffer, put=__cordl_internal_set_ringBuffer)) ::Meta::WitAi::Data::RingBuffer_1<T>*  ringBuffer;

/// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::WitAi::Data::RingBuffer_1_Marker<T>* Clone() ;

static inline ::Meta::WitAi::Data::RingBuffer_1_Marker<T>* New_ctor(::Meta::WitAi::Data::RingBuffer_1<T>*  ringBuffer, int64_t  markerPosition, int32_t  bufIndex) ;

/// @brief Method Offset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Offset(int32_t  amount) ;

/// @brief Method ReadIntoWriters, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ReadIntoWriters(/* [ParamArray] */ ::ArrayW<::Meta::WitAi::Data::RingBuffer_1_ByteDataWriter<T>*>  writers) ;

constexpr int64_t const& __cordl_internal_get_bufferDataIndex() const;

constexpr int64_t& __cordl_internal_get_bufferDataIndex() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr ::Meta::WitAi::Data::RingBuffer_1<T>* const& __cordl_internal_get_ringBuffer() const;

constexpr ::Meta::WitAi::Data::RingBuffer_1<T>*& __cordl_internal_get_ringBuffer() ;

constexpr void __cordl_internal_set_bufferDataIndex(int64_t  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_ringBuffer(::Meta::WitAi::Data::RingBuffer_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Meta::WitAi::Data::RingBuffer_1<T>*  ringBuffer, int64_t  markerPosition, int32_t  bufIndex) ;

/// @brief Method get_AvailableByteCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int64_t get_AvailableByteCount() ;

/// @brief Method get_IsValid, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_RequestedByteCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int64_t get_RequestedByteCount() ;

/// @brief Method get_RingBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::WitAi::Data::RingBuffer_1<T>* get_RingBuffer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RingBuffer_1_Marker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1_Marker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RingBuffer_1_Marker(RingBuffer_1_Marker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1_Marker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RingBuffer_1_Marker(RingBuffer_1_Marker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25699};

/// @brief Field bufferDataIndex, offset: 0x10, size: 0x8, def value: None
 int64_t  ___bufferDataIndex;

/// @brief Field index, offset: 0x18, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field ringBuffer, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Data::RingBuffer_1<T>*  ___ringBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Data
// Dependencies System.MulticastDelegate
namespace Meta::WitAi::Data {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Meta.WitAi.Data.RingBuffer`1/ByteDataWriter<T>
class CORDL_TYPE RingBuffer_1_ByteDataWriter : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(::ArrayW<T>  buffer, int32_t  offset, int32_t  length) ;

static inline ::Meta::WitAi::Data::RingBuffer_1_ByteDataWriter<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RingBuffer_1_ByteDataWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1_ByteDataWriter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RingBuffer_1_ByteDataWriter(RingBuffer_1_ByteDataWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1_ByteDataWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RingBuffer_1_ByteDataWriter(RingBuffer_1_ByteDataWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25698};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Data
// Dependencies System.MulticastDelegate
namespace Meta::WitAi::Data {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Meta.WitAi.Data.RingBuffer`1/OnDataAdded<T>
class CORDL_TYPE RingBuffer_1_OnDataAdded : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(::ArrayW<T>  data, int32_t  offset, int32_t  length) ;

static inline ::Meta::WitAi::Data::RingBuffer_1_OnDataAdded<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RingBuffer_1_OnDataAdded() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1_OnDataAdded", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RingBuffer_1_OnDataAdded(RingBuffer_1_OnDataAdded && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1_OnDataAdded", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RingBuffer_1_OnDataAdded(RingBuffer_1_OnDataAdded const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25697};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Data
