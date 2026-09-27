#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/Marshal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Marshal)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Runtime::InteropServices {
class ICustomMarshaler;
}
namespace System::Runtime::InteropServices {
class Marshal_MarshalerInstanceKeyComparer;
}
namespace System::Runtime::InteropServices {
class Marshal_SecureStringAllocator;
}
namespace System::Runtime::InteropServices {
class Marshal___c;
}
namespace System::Security {
class SecureString;
}
namespace System {
class Array;
}
namespace System {
class Delegate;
}
namespace System {
class Exception;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class Marshal;
}
namespace System::Runtime::InteropServices {
class Marshal_MarshalerInstanceKeyComparer;
}
namespace System::Runtime::InteropServices {
class Marshal_SecureStringAllocator;
}
namespace System::Runtime::InteropServices {
class Marshal___c;
}
// Write type traits
MARK_REF_T(::System::Runtime::InteropServices::Marshal*);
MARK_REF_T(::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer*);
MARK_REF_T(::System::Runtime::InteropServices::Marshal_SecureStringAllocator*);
MARK_REF_T(::System::Runtime::InteropServices::Marshal___c*);
DEFINE_IL2CPP_CLASS(::System::Runtime::InteropServices::Marshal*, "System.Runtime.InteropServices", "Marshal");
DEFINE_IL2CPP_CLASS(::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer*, "System.Runtime.InteropServices", "Marshal/MarshalerInstanceKeyComparer");
DEFINE_IL2CPP_CLASS(::System::Runtime::InteropServices::Marshal_SecureStringAllocator*, "System.Runtime.InteropServices", "Marshal/SecureStringAllocator");
DEFINE_IL2CPP_CLASS(::System::Runtime::InteropServices::Marshal___c*, "System.Runtime.InteropServices", "Marshal/<>c");
// Dependencies System.Object
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.Marshal
class CORDL_TYPE Marshal : public ::System::Object {
public:
// Declarations
using MarshalerInstanceKeyComparer = ::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer;

using SecureStringAllocator = ::System::Runtime::InteropServices::Marshal_SecureStringAllocator;

using __c = ::System::Runtime::InteropServices::Marshal___c;

/// @brief Field MarshalerInstanceCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarshalerInstanceCache, put=setStaticF_MarshalerInstanceCache)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>*  MarshalerInstanceCache;

/// @brief Field MarshalerInstanceCacheLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarshalerInstanceCacheLock, put=setStaticF_MarshalerInstanceCacheLock)) ::System::Object*  MarshalerInstanceCacheLock;

/// @brief Field SystemDefaultCharSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SystemDefaultCharSize, put=setStaticF_SystemDefaultCharSize)) int32_t  SystemDefaultCharSize;

/// @brief Field SystemMaxDBCSCharSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SystemMaxDBCSCharSize, put=setStaticF_SystemMaxDBCSCharSize)) int32_t  SystemMaxDBCSCharSize;

/// @brief Method AllocCoTaskMem, addr 0xa1e21c8, size 0x4, virtual false, abstract: false, final false
static inline ::System::IntPtr AllocCoTaskMem(int32_t  cb) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)1)]
/// @brief Method AllocHGlobal, addr 0xa1e21cc, size 0x4, virtual false, abstract: false, final false
static inline ::System::IntPtr AllocHGlobal(::System::IntPtr  cb) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)1)]
/// @brief Method AllocHGlobal, addr 0xa1e21d0, size 0x68, virtual false, abstract: false, final false
static inline ::System::IntPtr AllocHGlobal(int32_t  cb) ;

/// @brief Method BufferToBSTR, addr 0xa1e2ff8, size 0x4, virtual false, abstract: false, final false
static inline ::System::IntPtr BufferToBSTR(char16_t*  ptr, int32_t  slen) ;

/// @brief Method ClearAnsi, addr 0xa1e2a08, size 0x9c, virtual false, abstract: false, final false
static inline void ClearAnsi(::System::IntPtr  ptr) ;

/// @brief Method ClearBSTR, addr 0xa1e2894, size 0xac, virtual false, abstract: false, final false
static inline void ClearBSTR(::System::IntPtr  ptr) ;

/// @brief Method ClearUnicode, addr 0xa1e2ac0, size 0x90, virtual false, abstract: false, final false
static inline void ClearUnicode(::System::IntPtr  ptr) ;

/// @brief Method Copy, addr 0xa1e2354, size 0xf0, virtual false, abstract: false, final false
static inline void Copy(::ArrayW<uint8_t>  source, int32_t  startIndex, ::System::IntPtr  destination, int32_t  length) ;

/// @brief Method Copy, addr 0xa1e25b8, size 0xf0, virtual false, abstract: false, final false
static inline void Copy(::System::IntPtr  source, ::ArrayW<char16_t>  destination, int32_t  startIndex, int32_t  length) ;

/// @brief Method Copy, addr 0xa1e2798, size 0xf0, virtual false, abstract: false, final false
static inline void Copy(::System::IntPtr  source, ::ArrayW<float_t>  destination, int32_t  startIndex, int32_t  length) ;

/// @brief Method Copy, addr 0xa1e26a8, size 0xf0, virtual false, abstract: false, final false
static inline void Copy(::System::IntPtr  source, ::ArrayW<int32_t>  destination, int32_t  startIndex, int32_t  length) ;

/// @brief Method Copy, addr 0xa1e24c8, size 0xf0, virtual false, abstract: false, final false
static inline void Copy(::System::IntPtr  source, ::ArrayW<uint8_t>  destination, int32_t  startIndex, int32_t  length) ;

/// @brief Method FreeBSTR, addr 0xa1e2888, size 0x4, virtual false, abstract: false, final false
static inline void FreeBSTR(::System::IntPtr  ptr) ;

/// @brief Method FreeCoTaskMem, addr 0xa1e288c, size 0x4, virtual false, abstract: false, final false
static inline void FreeCoTaskMem(::System::IntPtr  ptr) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method FreeHGlobal, addr 0xa1e2890, size 0x4, virtual false, abstract: false, final false
static inline void FreeHGlobal(::System::IntPtr  hglobal) ;

/// @brief Method GetCustomMarshalerInstance, addr 0xa1e38ec, size 0x88c, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::ICustomMarshaler* GetCustomMarshalerInstance(::System::Type*  type, ::StringW  cookie) ;

/// @brief Method GetDelegateForFunctionPointer, addr 0xa1e362c, size 0x21c, virtual false, abstract: false, final false
static inline ::System::Delegate* GetDelegateForFunctionPointer(::System::IntPtr  ptr, ::System::Type*  t) ;

/// @brief Method GetDelegateForFunctionPointer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDelegate>
static inline TDelegate GetDelegateForFunctionPointer(::System::IntPtr  ptr) ;

/// @brief Method GetDelegateForFunctionPointerInternal, addr 0xa1e3628, size 0x4, virtual false, abstract: false, final false
static inline ::System::Delegate* GetDelegateForFunctionPointerInternal(::System::IntPtr  ptr, ::System::Type*  t) ;

/// @brief Method GetFunctionPointerForDelegate, addr 0xa1e384c, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointerForDelegate(::System::Delegate*  d) ;

/// @brief Method GetFunctionPointerForDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDelegate>
static inline ::System::IntPtr GetFunctionPointerForDelegate(TDelegate  d) ;

/// @brief Method GetFunctionPointerForDelegateInternal, addr 0xa1e3848, size 0x4, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointerForDelegateInternal(::System::Delegate*  d) ;

/// @brief Method GetHRForException, addr 0xa1e2c94, size 0xc, virtual false, abstract: false, final false
static inline int32_t GetHRForException(::System::Exception*  e) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method GetLastWin32Error, addr 0xa1e11dc, size 0x4, virtual false, abstract: false, final false
static inline int32_t GetLastWin32Error() ;

/// @brief Method IsComObject, addr 0xa1e2ca0, size 0x8, virtual false, abstract: false, final false
static inline bool IsComObject(::System::Object*  o) ;

/// @brief Method OffsetOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::IntPtr OffsetOf(::StringW  fieldName) ;

/// @brief Method OffsetOf, addr 0xa1e2ca8, size 0x4, virtual false, abstract: false, final false
static inline ::System::IntPtr OffsetOf(::System::Type*  t, ::StringW  fieldName) ;

/// @brief Method PtrToStringAnsi, addr 0xa1e2cac, size 0x4, virtual false, abstract: false, final false
static inline ::StringW PtrToStringAnsi(::System::IntPtr  ptr) ;

/// @brief Method PtrToStringAnsi, addr 0xa1e2cb0, size 0x4, virtual false, abstract: false, final false
static inline ::StringW PtrToStringAnsi(::System::IntPtr  ptr, int32_t  len) ;

/// @brief Method PtrToStringUTF8, addr 0xa1e2cb4, size 0x54, virtual false, abstract: false, final false
static inline ::StringW PtrToStringUTF8(::System::IntPtr  ptr) ;

/// @brief Method PtrToStringUTF8, addr 0xa1e2d08, size 0x64, virtual false, abstract: false, final false
static inline ::StringW PtrToStringUTF8(::System::IntPtr  ptr, int32_t  byteLen) ;

/// @brief Method PtrToStringUni, addr 0xa1e2d6c, size 0x4, virtual false, abstract: false, final false
static inline ::StringW PtrToStringUni(::System::IntPtr  ptr) ;

/// @brief Method PtrToStringUni, addr 0xa1e2d70, size 0x4, virtual false, abstract: false, final false
static inline ::StringW PtrToStringUni(::System::IntPtr  ptr, int32_t  len) ;

/// [ComVisible(true)]
/// @brief Method PtrToStructure, addr 0xa1e2d78, size 0x4, virtual false, abstract: false, final false
static inline ::System::Object* PtrToStructure(::System::IntPtr  ptr, ::System::Type*  structureType) ;

/// @brief Method PtrToStructure, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T PtrToStructure(::System::IntPtr  ptr) ;

/// [ComVisible(true)]
/// @brief Method PtrToStructure, addr 0xa1e2d74, size 0x4, virtual false, abstract: false, final false
static inline void PtrToStructure(::System::IntPtr  ptr, ::System::Object*  structure) ;

/// @brief Method PtrToStructure, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void PtrToStructure(::System::IntPtr  ptr, T  structure) ;

/// @brief Method ReadByte, addr 0xa1e2d7c, size 0x18, virtual false, abstract: false, final false
static inline uint8_t ReadByte(::System::IntPtr  ptr) ;

/// @brief Method ReadByte, addr 0xa1e2aa4, size 0x1c, virtual false, abstract: false, final false
static inline uint8_t ReadByte(::System::IntPtr  ptr, int32_t  ofs) ;

/// @brief Method ReadInt16, addr 0xa1e2b98, size 0x44, virtual false, abstract: false, final false
static inline int16_t ReadInt16(::System::IntPtr  ptr, int32_t  ofs) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method ReadInt32, addr 0xa1e2d94, size 0x3c, virtual false, abstract: false, final false
static inline int32_t ReadInt32(::System::IntPtr  ptr) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method ReadInt32, addr 0xa1e2940, size 0x48, virtual false, abstract: false, final false
static inline int32_t ReadInt32(::System::IntPtr  ptr, int32_t  ofs) ;

/// @brief Method SecureStringGlobalAllocator, addr 0xa1e2ffc, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr SecureStringGlobalAllocator(int32_t  len) ;

/// @brief Method SecureStringToBSTR, addr 0xa1e2ebc, size 0x13c, virtual false, abstract: false, final false
static inline ::System::IntPtr SecureStringToBSTR(::System::Security::SecureString*  s) ;

/// @brief Method SecureStringToGlobalAllocUnicode, addr 0xa1e32d4, size 0xe4, virtual false, abstract: false, final false
static inline ::System::IntPtr SecureStringToGlobalAllocUnicode(::System::Security::SecureString*  s) ;

/// @brief Method SecureStringToUnicode, addr 0xa1e3050, size 0x284, virtual false, abstract: false, final false
static inline ::System::IntPtr SecureStringToUnicode(::System::Security::SecureString*  s, ::System::Runtime::InteropServices::Marshal_SecureStringAllocator*  allocator) ;

/// @brief Method SetLastWin32Error, addr 0xa1e11e4, size 0x4, virtual false, abstract: false, final false
static inline void SetLastWin32Error(int32_t  error) ;

/// @brief Method SizeOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t SizeOf() ;

/// [ComVisible(true)]
/// @brief Method SizeOf, addr 0xa1e2dd0, size 0x70, virtual false, abstract: false, final false
static inline int32_t SizeOf(::System::Object*  structure) ;

/// @brief Method SizeOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t SizeOf(T  structure) ;

/// @brief Method SizeOf, addr 0xa1e2e40, size 0x4, virtual false, abstract: false, final false
static inline int32_t SizeOf(::System::Type*  t) ;

/// @brief Method StringToCoTaskMemUTF8, addr 0xa1e427c, size 0xe8, virtual false, abstract: false, final false
static inline ::System::IntPtr StringToCoTaskMemUTF8(::StringW  s) ;

/// @brief Method StringToHGlobalAnsi, addr 0xa1e2e48, size 0x74, virtual false, abstract: false, final false
static inline ::System::IntPtr StringToHGlobalAnsi(::StringW  s) ;

/// @brief Method StringToHGlobalAnsi, addr 0xa1e2e44, size 0x4, virtual false, abstract: false, final false
static inline ::System::IntPtr StringToHGlobalAnsi(char16_t*  s, int32_t  length) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)1)]
/// [ComVisible(true)]
/// @brief Method StructureToPtr, addr 0xa1e3458, size 0x4, virtual false, abstract: false, final false
static inline void StructureToPtr(::System::Object*  structure, ::System::IntPtr  ptr, bool  fDeleteOld) ;

/// @brief Method StructureToPtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void StructureToPtr(T  structure, ::System::IntPtr  ptr, bool  fDeleteOld) ;

/// @brief Method UnsafeAddrOfPinnedArrayElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::IntPtr UnsafeAddrOfPinnedArrayElement(::ArrayW<T>  arr, int32_t  index) ;

/// @brief Method UnsafeAddrOfPinnedArrayElement, addr 0xa1e345c, size 0x4, virtual false, abstract: false, final false
static inline ::System::IntPtr UnsafeAddrOfPinnedArrayElement(::System::Array*  arr, int32_t  index) ;

/// @brief Method WriteByte, addr 0xa1e2988, size 0x24, virtual false, abstract: false, final false
static inline void WriteByte(::System::IntPtr  ptr, int32_t  ofs, uint8_t  val) ;

/// @brief Method WriteByte, addr 0xa1e3460, size 0x1c, virtual false, abstract: false, final false
static inline void WriteByte(::System::IntPtr  ptr, uint8_t  val) ;

/// @brief Method WriteInt16, addr 0xa1e2b50, size 0x48, virtual false, abstract: false, final false
static inline void WriteInt16(::System::IntPtr  ptr, int32_t  ofs, int16_t  val) ;

/// @brief Method WriteInt32, addr 0xa1e34c0, size 0x4c, virtual false, abstract: false, final false
static inline void WriteInt32(::System::IntPtr  ptr, int32_t  ofs, int32_t  val) ;

/// @brief Method WriteInt32, addr 0xa1e347c, size 0x44, virtual false, abstract: false, final false
static inline void WriteInt32(::System::IntPtr  ptr, int32_t  val) ;

/// @brief Method WriteInt64, addr 0xa1e350c, size 0x4c, virtual false, abstract: false, final false
static inline void WriteInt64(::System::IntPtr  ptr, int32_t  ofs, int64_t  val) ;

/// @brief Method WriteIntPtr, addr 0xa1e3558, size 0xd0, virtual false, abstract: false, final false
static inline void WriteIntPtr(::System::IntPtr  ptr, int32_t  ofs, ::System::IntPtr  val) ;

/// @brief Method ZeroFreeBSTR, addr 0xa1e29ac, size 0x5c, virtual false, abstract: false, final false
static inline void ZeroFreeBSTR(::System::IntPtr  s) ;

/// @brief Method ZeroFreeGlobalAllocAnsi, addr 0xa1e2bdc, size 0x5c, virtual false, abstract: false, final false
static inline void ZeroFreeGlobalAllocAnsi(::System::IntPtr  s) ;

/// @brief Method ZeroFreeGlobalAllocUnicode, addr 0xa1e2c38, size 0x5c, virtual false, abstract: false, final false
static inline void ZeroFreeGlobalAllocUnicode(::System::IntPtr  s) ;

/// @brief Method copy_from_unmanaged, addr 0xa1e2444, size 0x80, virtual false, abstract: false, final false
static inline void copy_from_unmanaged(::System::IntPtr  source, int32_t  startIndex, ::System::Array*  destination, int32_t  length) ;

/// @brief Method copy_from_unmanaged_fixed, addr 0xa1e24c4, size 0x4, virtual false, abstract: false, final false
static inline void copy_from_unmanaged_fixed(::System::IntPtr  source, int32_t  startIndex, ::System::Array*  destination, int32_t  length, void*  fixed_destination_element) ;

/// @brief Method copy_to_unmanaged, addr 0xa1e2270, size 0xe4, virtual false, abstract: false, final false
static inline void copy_to_unmanaged(::ArrayW<uint8_t>  source, int32_t  startIndex, ::System::IntPtr  destination, int32_t  length) ;

/// @brief Method copy_to_unmanaged_fixed, addr 0xa1e2238, size 0x4, virtual false, abstract: false, final false
static inline void copy_to_unmanaged_fixed(::System::Array*  source, int32_t  startIndex, ::System::IntPtr  destination, int32_t  length, void*  fixed_source_element) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>* getStaticF_MarshalerInstanceCache() ;

static inline ::System::Object* getStaticF_MarshalerInstanceCacheLock() ;

static inline int32_t getStaticF_SystemDefaultCharSize() ;

static inline int32_t getStaticF_SystemMaxDBCSCharSize() ;

static inline void setStaticF_MarshalerInstanceCache(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>*  value) ;

static inline void setStaticF_MarshalerInstanceCacheLock(::System::Object*  value) ;

static inline void setStaticF_SystemDefaultCharSize(int32_t  value) ;

static inline void setStaticF_SystemMaxDBCSCharSize(int32_t  value) ;

/// @brief Method skip_fixed, addr 0xa1e223c, size 0x34, virtual false, abstract: false, final false
static inline bool skip_fixed(::System::Array*  array, int32_t  startIndex) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Marshal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Marshal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Marshal(Marshal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Marshal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Marshal(Marshal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6474};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::InteropServices::Marshal) == 0x10, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.Marshal/<>c
class CORDL_TYPE Marshal___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::Runtime::InteropServices::Marshal___c*  __9;

/// @brief Field <>9__201_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__201_0, put=setStaticF___9__201_0)) ::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>*>*  __9__201_0;

static inline ::System::Runtime::InteropServices::Marshal___c* New_ctor() ;

/// @brief Method <GetCustomMarshalerInstance>b__201_0, addr 0xa1e455c, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>* _GetCustomMarshalerInstance_b__201_0() ;

/// @brief Method .ctor, addr 0xa1e4554, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Runtime::InteropServices::Marshal___c* getStaticF___9() ;

static inline ::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>*>* getStaticF___9__201_0() ;

static inline void setStaticF___9(::System::Runtime::InteropServices::Marshal___c*  value) ;

static inline void setStaticF___9__201_0(::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::Runtime::InteropServices::ICustomMarshaler*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Marshal___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Marshal___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Marshal___c(Marshal___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Marshal___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Marshal___c(Marshal___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6473};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::InteropServices::Marshal___c) == 0x10, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
// Dependencies System.Object
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.Marshal/MarshalerInstanceKeyComparer
class CORDL_TYPE Marshal_MarshalerInstanceKeyComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::ValueTuple_2<::System::Type*,::StringW>>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::System::ValueTuple_2<::System::Type*,::StringW>>*() noexcept;

/// @brief Method Equals, addr 0xa1e441c, size 0x74, virtual true, abstract: false, final true
inline bool Equals(::System::ValueTuple_2<::System::Type*,::StringW>  lhs, ::System::ValueTuple_2<::System::Type*,::StringW>  rhs) ;

/// @brief Method GetHashCode, addr 0xa1e4490, size 0x54, virtual true, abstract: false, final true
inline int32_t GetHashCode(::System::ValueTuple_2<::System::Type*,::StringW>  key) ;

static inline ::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer* New_ctor() ;

/// @brief Method .ctor, addr 0xa1e44e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::ValueTuple_2<::System::Type*,::StringW>>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::ValueTuple_2<::System::Type*,::StringW>>* i___System__Collections__Generic__IEqualityComparer_1___System__ValueTuple_2___System__Type____StringW__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Marshal_MarshalerInstanceKeyComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Marshal_MarshalerInstanceKeyComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Marshal_MarshalerInstanceKeyComparer(Marshal_MarshalerInstanceKeyComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Marshal_MarshalerInstanceKeyComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Marshal_MarshalerInstanceKeyComparer(Marshal_MarshalerInstanceKeyComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6472};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer) == 0x10, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
// Dependencies System.MulticastDelegate
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.Marshal/SecureStringAllocator
class CORDL_TYPE Marshal_SecureStringAllocator : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xa1e4408, size 0x14, virtual true, abstract: false, final false
inline ::System::IntPtr Invoke(int32_t  len) ;

static inline ::System::Runtime::InteropServices::Marshal_SecureStringAllocator* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa1e33b8, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Marshal_SecureStringAllocator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Marshal_SecureStringAllocator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Marshal_SecureStringAllocator(Marshal_SecureStringAllocator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Marshal_SecureStringAllocator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Marshal_SecureStringAllocator(Marshal_SecureStringAllocator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6471};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::InteropServices::Marshal_SecureStringAllocator) == 0x80, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
