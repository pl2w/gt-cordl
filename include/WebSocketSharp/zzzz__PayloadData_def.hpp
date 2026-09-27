#pragma once
// IWYU pragma private; include "WebSocketSharp/PayloadData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PayloadData)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace WebSocketSharp {
class PayloadData__GetEnumerator_d__25;
}
// Forward declare root types
namespace WebSocketSharp {
class PayloadData;
}
namespace WebSocketSharp {
class PayloadData__GetEnumerator_d__25;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::PayloadData*);
MARK_REF_T(::WebSocketSharp::PayloadData__GetEnumerator_d__25*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::PayloadData*, "WebSocketSharp", "PayloadData");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::PayloadData__GetEnumerator_d__25*, "WebSocketSharp", "PayloadData/<GetEnumerator>d__25");
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.PayloadData
class CORDL_TYPE PayloadData : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__25 = ::WebSocketSharp::PayloadData__GetEnumerator_d__25;

 __declspec(property(get=get_ApplicationData)) ::ArrayW<uint8_t>  ApplicationData;

 __declspec(property(get=get_Code)) uint16_t  Code;

/// @brief Field Empty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Empty, put=setStaticF_Empty)) ::WebSocketSharp::PayloadData*  Empty;

 __declspec(property(get=get_HasReservedCode)) bool  HasReservedCode;

 __declspec(property(get=get_Length)) uint64_t  Length;

/// @brief Field MaxLength, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MaxLength, put=setStaticF_MaxLength)) uint64_t  MaxLength;

/// @brief Field _data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::ArrayW<uint8_t>  _data;

/// @brief Field _extDataLength, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__extDataLength, put=__cordl_internal_set__extDataLength)) int64_t  _extDataLength;

/// @brief Field _length, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__length, put=__cordl_internal_set__length)) int64_t  _length;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<uint8_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<uint8_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method GetEnumerator, addr 0xb97f9b8, size 0x6c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<uint8_t>* GetEnumerator() ;

/// @brief Method Mask, addr 0xb97f914, size 0xa4, virtual false, abstract: false, final false
inline void Mask(::ArrayW<uint8_t>  key) ;

static inline ::WebSocketSharp::PayloadData* New_ctor(uint16_t  code, ::StringW  reason) ;

static inline ::WebSocketSharp::PayloadData* New_ctor(::ArrayW<uint8_t>  data) ;

static inline ::WebSocketSharp::PayloadData* New_ctor(::ArrayW<uint8_t>  data, int64_t  length) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb97fa60, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToArray, addr 0xb97fa4c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToArray() ;

/// @brief Method ToString, addr 0xb97fa54, size 0xc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__data() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__data() ;

constexpr int64_t const& __cordl_internal_get__extDataLength() const;

constexpr int64_t& __cordl_internal_get__extDataLength() ;

constexpr int64_t const& __cordl_internal_get__length() const;

constexpr int64_t& __cordl_internal_get__length() ;

constexpr void __cordl_internal_set__data(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__extDataLength(int64_t  value) ;

constexpr void __cordl_internal_set__length(int64_t  value) ;

/// @brief Method .ctor, addr 0xb979f80, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(uint16_t  code, ::StringW  reason) ;

/// @brief Method .ctor, addr 0xb97f82c, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  data) ;

/// @brief Method .ctor, addr 0xb97f7f0, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  data, int64_t  length) ;

static inline ::WebSocketSharp::PayloadData* getStaticF_Empty() ;

static inline uint64_t getStaticF_MaxLength() ;

/// @brief Method get_ApplicationData, addr 0xb977abc, size 0xa0, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_ApplicationData() ;

/// @brief Method get_Code, addr 0xb97f870, size 0x9c, virtual false, abstract: false, final false
inline uint16_t get_Code() ;

/// @brief Method get_HasReservedCode, addr 0xb97cd10, size 0x9c, virtual false, abstract: false, final false
inline bool get_HasReservedCode() ;

/// @brief Method get_Length, addr 0xb97f90c, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_Length() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<uint8_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<uint8_t>* i___System__Collections__Generic__IEnumerable_1_uint8_t_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

static inline void setStaticF_Empty(::WebSocketSharp::PayloadData*  value) ;

static inline void setStaticF_MaxLength(uint64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PayloadData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PayloadData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PayloadData(PayloadData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PayloadData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PayloadData(PayloadData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30335};

/// @brief Field _data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____data;

/// @brief Field _extDataLength, offset: 0x18, size: 0x8, def value: None
 int64_t  ____extDataLength;

/// @brief Field _length, offset: 0x20, size: 0x8, def value: None
 int64_t  ____length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::PayloadData, ____data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::PayloadData, ____extDataLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::PayloadData, ____length) == 0x20, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::PayloadData) == 0x28, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.PayloadData/<GetEnumerator>d__25
class CORDL_TYPE PayloadData__GetEnumerator_d__25 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Byte__get_Current)) uint8_t  System_Collections_Generic_IEnumerator_System_Byte__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) uint8_t  __2__current;

/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::WebSocketSharp::PayloadData*  __4__this;

/// @brief Field <>s__1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) ::ArrayW<uint8_t>  __s__1;

/// @brief Field <>s__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__2, put=__cordl_internal_set___s__2)) int32_t  __s__2;

/// @brief Field <b>5__3, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__b_5__3, put=__cordl_internal_set__b_5__3)) uint8_t  _b_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<uint8_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<uint8_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb97fa68, size 0xbc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::WebSocketSharp::PayloadData__GetEnumerator_d__25* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Byte>.get_Current, addr 0xb97fb24, size 0x8, virtual true, abstract: false, final true
inline uint8_t System_Collections_Generic_IEnumerator_System_Byte__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb97fb2c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb97fb64, size 0x28, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb97fa64, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr uint8_t const& __cordl_internal_get___2__current() const;

constexpr uint8_t& __cordl_internal_get___2__current() ;

constexpr ::WebSocketSharp::PayloadData* const& __cordl_internal_get___4__this() const;

constexpr ::WebSocketSharp::PayloadData*& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get___s__1() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get___s__1() ;

constexpr int32_t const& __cordl_internal_get___s__2() const;

constexpr int32_t& __cordl_internal_get___s__2() ;

constexpr uint8_t const& __cordl_internal_get__b_5__3() const;

constexpr uint8_t& __cordl_internal_get__b_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(uint8_t  value) ;

constexpr void __cordl_internal_set___4__this(::WebSocketSharp::PayloadData*  value) ;

constexpr void __cordl_internal_set___s__1(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set___s__2(int32_t  value) ;

constexpr void __cordl_internal_set__b_5__3(uint8_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb97fa24, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<uint8_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<uint8_t>* i___System__Collections__Generic__IEnumerator_1_uint8_t_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PayloadData__GetEnumerator_d__25() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PayloadData__GetEnumerator_d__25", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PayloadData__GetEnumerator_d__25(PayloadData__GetEnumerator_d__25 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PayloadData__GetEnumerator_d__25", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PayloadData__GetEnumerator_d__25(PayloadData__GetEnumerator_d__25 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30334};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x14, size: 0x1, def value: None
 uint8_t  _____2__current;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::WebSocketSharp::PayloadData*  _____4__this;

/// @brief Field <>s__1, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  _____s__1;

/// @brief Field <>s__2, offset: 0x28, size: 0x4, def value: None
 int32_t  _____s__2;

/// @brief Field <b>5__3, offset: 0x2c, size: 0x1, def value: None
 uint8_t  ____b_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::PayloadData__GetEnumerator_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::PayloadData__GetEnumerator_d__25, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::PayloadData__GetEnumerator_d__25, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::PayloadData__GetEnumerator_d__25, _____s__1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::PayloadData__GetEnumerator_d__25, _____s__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::PayloadData__GetEnumerator_d__25, ____b_5__3) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::PayloadData__GetEnumerator_d__25) == 0x30, "Size mismatch!");

} // namespace end def WebSocketSharp
