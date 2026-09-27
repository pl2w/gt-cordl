#pragma once
// IWYU pragma private; include "GlobalNamespace/NativeArrayPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeArrayPool_1)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class NativeArrayPool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::NativeArrayPool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::NativeArrayPool_1, "", "NativeArrayPool`1");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: NativeArrayPool`1<T>
class CORDL_TYPE NativeArrayPool_1 : public ::System::Object {
public:
// Declarations
/// @brief Field _lookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__lookup, put=setStaticF__lookup)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Stack_1<::Unity::Collections::NativeArray_1<T>>*>*  _lookup;

/// [OnEnterPlay_Run]
/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Dispose() ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Unity::Collections::NativeArray_1<T> Get(int32_t  length) ;

/// @brief Method GetCollectionForLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Stack_1<::Unity::Collections::NativeArray_1<T>>* GetCollectionForLength(int32_t  length) ;

/// @brief Method OnQuit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void OnQuit() ;

/// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Return(::Unity::Collections::NativeArray_1<T>  item) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Stack_1<::Unity::Collections::NativeArray_1<T>>*>* getStaticF__lookup() ;

static inline void setStaticF__lookup(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Stack_1<::Unity::Collections::NativeArray_1<T>>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeArrayPool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeArrayPool_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeArrayPool_1(NativeArrayPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeArrayPool_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeArrayPool_1(NativeArrayPool_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{490};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
