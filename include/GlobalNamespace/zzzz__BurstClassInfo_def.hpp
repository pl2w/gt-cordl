#pragma once
// IWYU pragma private; include "GlobalNamespace/BurstClassInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BurstClassInfo_ClassInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_def.hpp"
#include "Unity/Collections/zzzz__FixedString32Bytes_def.hpp"
#include "Unity/Collections/zzzz__NativeHashMap_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BurstClassInfo)
namespace GlobalNamespace {
struct BurstClassInfo_BurstFieldInfo;
}
namespace GlobalNamespace {
struct BurstClassInfo_ClassInfo;
}
namespace GlobalNamespace {
class BurstClassInfo_ClassList;
}
namespace GlobalNamespace {
struct BurstClassInfo_EFieldTypes;
}
namespace GlobalNamespace {
class BurstClassInfo_Index_00004E4E$BurstDirectCall;
}
namespace GlobalNamespace {
class BurstClassInfo_Index_00004E4E$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class BurstClassInfo_NameCall_00004E50$BurstDirectCall;
}
namespace GlobalNamespace {
class BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class BurstClassInfo_NewIndex_00004E4F$BurstDirectCall;
}
namespace GlobalNamespace {
class BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class ClassList_BurstClassInfo_FieldKey;
}
namespace GlobalNamespace {
template<typename T>
class ClassList_BurstClassInfo_MetatableNames_1;
}
namespace GlobalNamespace {
class lua_CFunction;
}
namespace GlobalNamespace {
struct lua_State;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Burst {
template<typename T>
struct FunctionPointer_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BurstClassInfo;
}
namespace GlobalNamespace {
class BurstClassInfo_ClassList;
}
namespace GlobalNamespace {
class BurstClassInfo_Index_00004E4E$BurstDirectCall;
}
namespace GlobalNamespace {
class BurstClassInfo_Index_00004E4E$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class BurstClassInfo_NameCall_00004E50$BurstDirectCall;
}
namespace GlobalNamespace {
class BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class BurstClassInfo_NewIndex_00004E4F$BurstDirectCall;
}
namespace GlobalNamespace {
class BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate;
}
namespace GlobalNamespace {
class ClassList_BurstClassInfo_FieldKey;
}
namespace GlobalNamespace {
template<typename T>
class ClassList_BurstClassInfo_MetatableNames_1;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BurstClassInfo*);
MARK_REF_T(::GlobalNamespace::BurstClassInfo_ClassList*);
MARK_REF_T(::GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall*);
MARK_REF_T(::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate*);
MARK_REF_T(::GlobalNamespace::ClassList_BurstClassInfo_FieldKey*);
MARK_GEN_REF_T_PTR(::GlobalNamespace::ClassList_BurstClassInfo_MetatableNames_1);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstClassInfo*, "", "BurstClassInfo");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstClassInfo_ClassList*, "", "BurstClassInfo/ClassList");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall*, "", "BurstClassInfo/Index_00004E4E$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate*, "", "BurstClassInfo/Index_00004E4E$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall*, "", "BurstClassInfo/NameCall_00004E50$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate*, "", "BurstClassInfo/NameCall_00004E50$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall*, "", "BurstClassInfo/NewIndex_00004E4F$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate*, "", "BurstClassInfo/NewIndex_00004E4F$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ClassList_BurstClassInfo_FieldKey*, "", "BurstClassInfo/ClassList/FieldKey");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::ClassList_BurstClassInfo_MetatableNames_1, "", "BurstClassInfo/ClassList/MetatableNames`1");
// [BurstCompile]
// Dependencies System.Object, Unity.Collections.FixedString32Bytes
namespace GlobalNamespace {
// Is value type: false
// CS Name: BurstClassInfo
class CORDL_TYPE BurstClassInfo : public ::System::Object {
public:
// Declarations
using BurstFieldInfo = ::GlobalNamespace::BurstClassInfo_BurstFieldInfo;

using ClassInfo = ::GlobalNamespace::BurstClassInfo_ClassInfo;

using ClassList = ::GlobalNamespace::BurstClassInfo_ClassList;

using EFieldTypes = ::GlobalNamespace::BurstClassInfo_EFieldTypes;

using Index_00004E4E$BurstDirectCall = ::GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall;

using Index_00004E4E$PostfixBurstDelegate = ::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate;

using NameCall_00004E50$BurstDirectCall = ::GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall;

using NameCall_00004E50$PostfixBurstDelegate = ::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate;

using NewIndex_00004E4F$BurstDirectCall = ::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall;

using NewIndex_00004E4F$PostfixBurstDelegate = ::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate;

/// @brief Field _k_metatableLookup, offset 0xffffffff, size 0x20 
 __declspec(property(get=getStaticF__k_metatableLookup, put=setStaticF__k_metatableLookup)) ::Unity::Collections::FixedString32Bytes  _k_metatableLookup;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(BurstClassInfo::Index_00004E4E$PostfixBurstDelegate))]
/// @brief Method Index, addr 0x5a90d78, size 0x4, virtual false, abstract: false, final false
static inline int32_t Index(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method Index$BurstManaged, addr 0x5a91050, size 0x514, virtual false, abstract: false, final false
static inline int32_t Index$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(BurstClassInfo::NameCall_00004E50$PostfixBurstDelegate))]
/// @brief Method NameCall, addr 0x5a90d80, size 0x4, virtual false, abstract: false, final false
static inline int32_t NameCall(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method NameCall$BurstManaged, addr 0x5a92000, size 0x530, virtual false, abstract: false, final false
static inline int32_t NameCall$BurstManaged(::GlobalNamespace::lua_State*  L) ;

/// @brief Method NewClass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void NewClass(::StringW  className, ::System::Collections::Generic::Dictionary_2<int32_t,::System::Reflection::FieldInfo*>*  fieldList, ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::lua_CFunction*>*  functionList, ::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>*  functionPtrList) ;

/// [BurstCompile]
/// [MonoPInvokeCallback(typeof(BurstClassInfo::NewIndex_00004E4F$PostfixBurstDelegate))]
/// @brief Method NewIndex, addr 0x5a90d7c, size 0x4, virtual false, abstract: false, final false
static inline int32_t NewIndex(::GlobalNamespace::lua_State*  L) ;

/// [BurstCompile]
/// @brief Method NewIndex$BurstManaged, addr 0x5a919a0, size 0x4b0, virtual false, abstract: false, final false
static inline int32_t NewIndex$BurstManaged(::GlobalNamespace::lua_State*  L) ;

static inline ::Unity::Collections::FixedString32Bytes getStaticF__k_metatableLookup() ;

static inline void setStaticF__k_metatableLookup(::Unity::Collections::FixedString32Bytes  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstClassInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstClassInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstClassInfo(BurstClassInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstClassInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstClassInfo(BurstClassInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3215};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BurstClassInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BurstClassInfo/NameCall_00004E50$BurstDirectCall
class CORDL_TYPE BurstClassInfo_NameCall_00004E50$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a92ccc, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a92bdc, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a90ef4, size 0xb8, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstClassInfo_NameCall_00004E50$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstClassInfo_NameCall_00004E50$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstClassInfo_NameCall_00004E50$BurstDirectCall(BurstClassInfo_NameCall_00004E50$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstClassInfo_NameCall_00004E50$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstClassInfo_NameCall_00004E50$BurstDirectCall(BurstClassInfo_NameCall_00004E50$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3214};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BurstClassInfo_NameCall_00004E50$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: BurstClassInfo/NameCall_00004E50$PostfixBurstDelegate
class CORDL_TYPE BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a92b94, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a92bb4, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a92b80, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a92ad0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate(BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate(BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3213};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BurstClassInfo_NameCall_00004E50$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BurstClassInfo/NewIndex_00004E4F$BurstDirectCall
class CORDL_TYPE BurstClassInfo_NewIndex_00004E4F$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a92ab8, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a929c8, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a90e3c, size 0xb8, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstClassInfo_NewIndex_00004E4F$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstClassInfo_NewIndex_00004E4F$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstClassInfo_NewIndex_00004E4F$BurstDirectCall(BurstClassInfo_NewIndex_00004E4F$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstClassInfo_NewIndex_00004E4F$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstClassInfo_NewIndex_00004E4F$BurstDirectCall(BurstClassInfo_NewIndex_00004E4F$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3212};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: BurstClassInfo/NewIndex_00004E4F$PostfixBurstDelegate
class CORDL_TYPE BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a92980, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a929a0, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a9296c, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a928bc, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate(BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate(BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3211};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BurstClassInfo_NewIndex_00004E4F$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BurstClassInfo/Index_00004E4E$BurstDirectCall
class CORDL_TYPE BurstClassInfo_Index_00004E4E$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x5a928a4, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// [BurstDiscard]
/// @brief Method GetFunctionPointerDiscard, addr 0x5a927b4, size 0xf0, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a90d84, size 0xb8, virtual false, abstract: false, final false
static inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstClassInfo_Index_00004E4E$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstClassInfo_Index_00004E4E$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstClassInfo_Index_00004E4E$BurstDirectCall(BurstClassInfo_Index_00004E4E$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstClassInfo_Index_00004E4E$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstClassInfo_Index_00004E4E$BurstDirectCall(BurstClassInfo_Index_00004E4E$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3210};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BurstClassInfo_Index_00004E4E$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: BurstClassInfo/Index_00004E4E$PostfixBurstDelegate
class CORDL_TYPE BurstClassInfo_Index_00004E4E$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a9276c, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method EndInvoke, addr 0x5a9278c, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x5a92758, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x5a926a8, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstClassInfo_Index_00004E4E$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstClassInfo_Index_00004E4E$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstClassInfo_Index_00004E4E$PostfixBurstDelegate(BurstClassInfo_Index_00004E4E$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstClassInfo_Index_00004E4E$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstClassInfo_Index_00004E4E$PostfixBurstDelegate(BurstClassInfo_Index_00004E4E$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3209};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BurstClassInfo_Index_00004E4E$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies BurstClassInfo::ClassInfo, System.Object, Unity.Burst.SharedStatic`1<T>, Unity.Collections.NativeHashMap`2<TKey, TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: BurstClassInfo/ClassList
class CORDL_TYPE BurstClassInfo_ClassList : public ::System::Object {
public:
// Declarations
using FieldKey = ::GlobalNamespace::ClassList_BurstClassInfo_FieldKey;

template<typename T>
using MetatableNames_1 = ::GlobalNamespace::ClassList_BurstClassInfo_MetatableNames_1<T>;

/// @brief Field InfoFields, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InfoFields, put=setStaticF_InfoFields)) ::Unity::Burst::SharedStatic_1<::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::BurstClassInfo_ClassInfo>>  InfoFields;

static inline ::GlobalNamespace::BurstClassInfo_ClassList* New_ctor() ;

/// @brief Method .ctor, addr 0x5a92610, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Burst::SharedStatic_1<::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::BurstClassInfo_ClassInfo>> getStaticF_InfoFields() ;

static inline void setStaticF_InfoFields(::Unity::Burst::SharedStatic_1<::Unity::Collections::NativeHashMap_2<int32_t,::GlobalNamespace::BurstClassInfo_ClassInfo>>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstClassInfo_ClassList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstClassInfo_ClassList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstClassInfo_ClassList(BurstClassInfo_ClassList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstClassInfo_ClassList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstClassInfo_ClassList(BurstClassInfo_ClassList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3208};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BurstClassInfo_ClassList) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, Unity.Collections.FixedString32Bytes
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: BurstClassInfo/ClassList/MetatableNames`1<T>
class CORDL_TYPE ClassList_BurstClassInfo_MetatableNames_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Name, offset 0xffffffff, size 0x20 
 __declspec(property(get=getStaticF_Name, put=setStaticF_Name)) ::Unity::Collections::FixedString32Bytes  Name;

static inline ::Unity::Collections::FixedString32Bytes getStaticF_Name() ;

static inline void setStaticF_Name(::Unity::Collections::FixedString32Bytes  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClassList_BurstClassInfo_MetatableNames_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClassList_BurstClassInfo_MetatableNames_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClassList_BurstClassInfo_MetatableNames_1(ClassList_BurstClassInfo_MetatableNames_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClassList_BurstClassInfo_MetatableNames_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClassList_BurstClassInfo_MetatableNames_1(ClassList_BurstClassInfo_MetatableNames_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3207};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BurstClassInfo/ClassList/FieldKey
class CORDL_TYPE ClassList_BurstClassInfo_FieldKey : public ::System::Object {
public:
// Declarations
static inline ::GlobalNamespace::ClassList_BurstClassInfo_FieldKey* New_ctor() ;

/// @brief Method .ctor, addr 0x5a926a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClassList_BurstClassInfo_FieldKey() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClassList_BurstClassInfo_FieldKey", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClassList_BurstClassInfo_FieldKey(ClassList_BurstClassInfo_FieldKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClassList_BurstClassInfo_FieldKey", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClassList_BurstClassInfo_FieldKey(ClassList_BurstClassInfo_FieldKey const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3206};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ClassList_BurstClassInfo_FieldKey) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
