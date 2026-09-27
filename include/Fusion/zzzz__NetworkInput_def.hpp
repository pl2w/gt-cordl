#pragma once
// IWYU pragma private; include "Fusion/NetworkInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__INetworkInput_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkInput)
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
struct NetworkInput;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkInput);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkInput, "Fusion", "NetworkInput");
// Dependencies Fusion.INetworkInput
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkInput
struct CORDL_TYPE NetworkInput {
public:
// Declarations
 __declspec(property(get=get_Data)) uint32_t*  Data;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Ptr)) uint32_t*  Ptr;

 __declspec(property(get=get_Type)) ::System::Type*  Type;

 __declspec(property(get=get_TypeKey, put=set_TypeKey)) int32_t  TypeKey;

 __declspec(property(get=get_WordCount)) int32_t  WordCount;

/// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkInput*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool Convert() ;

/// @brief Method Convert, addr 0x600b7dc, size 0x80, virtual false, abstract: false, final false
inline bool Convert(::System::Type*  type) ;

/// @brief Method FromRaw, addr 0x600b590, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::NetworkInput FromRaw(int32_t*  ptr, int32_t  wordCount) ;

/// @brief Method FromRaw, addr 0x600b588, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::NetworkInput FromRaw(uint32_t*  ptr, int32_t  wordCount) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkInput*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T Get() ;

/// @brief Method Is, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkInput*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool Is() ;

/// @brief Method Set, addr 0x600b598, size 0x120, virtual false, abstract: false, final false
inline bool Set(::System::Type*  type, void*  value) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkInput*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool Set(T  value) ;

/// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkInput*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool TryGet(::by_ref<T>  input) ;

/// @brief Method TrySet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkInput*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool TrySet(T  input) ;

/// @brief Method get_Data, addr 0x600b398, size 0x14, virtual false, abstract: false, final false
inline uint32_t* get_Data() ;

/// @brief Method get_IsValid, addr 0x600b3ac, size 0x10, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Ptr, addr 0x600b3bc, size 0x8, virtual false, abstract: false, final false
inline uint32_t* get_Ptr() ;

/// @brief Method get_Type, addr 0x600b3ec, size 0x20, virtual false, abstract: false, final false
inline ::System::Type* get_Type() ;

/// @brief Method get_TypeKey, addr 0x600b3c4, size 0x18, virtual false, abstract: false, final false
inline int32_t get_TypeKey() ;

/// @brief Method get_WordCount, addr 0x600b390, size 0x8, virtual false, abstract: false, final false
inline int32_t get_WordCount() ;

/// @brief Method set_TypeKey, addr 0x600b3dc, size 0x10, virtual false, abstract: false, final false
inline void set_TypeKey(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkInput() ;

// Ctor Parameters [CppParam { name: "_ptr", ty: "uint32_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_wordCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkInput(uint32_t*  _ptr, int32_t  _wordCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19373};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _ptr, offset: 0x0, size: 0x8, def value: None
 uint32_t*  _ptr;

/// @brief Field _wordCount, offset: 0x8, size: 0x4, def value: None
 int32_t  _wordCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkInput, _ptr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkInput, _wordCount) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkInput) == 0x10, "Size mismatch!");

} // namespace end def Fusion
