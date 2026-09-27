#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/Lazy_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Lazy_1)
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace SouthPointe::Serialization::MessagePack {
template<typename T>
class Lazy_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::SouthPointe::Serialization::MessagePack::Lazy_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::SouthPointe::Serialization::MessagePack::Lazy_1, "SouthPointe.Serialization.MessagePack", "Lazy`1");
// Dependencies System.Object
namespace SouthPointe::Serialization::MessagePack {
// cpp template
template<typename T>
// Is value type: false
// CS Name: SouthPointe.Serialization.MessagePack.Lazy`1<T>
class CORDL_TYPE Lazy_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Value)) T  Value;

/// @brief Field createValue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_createValue, put=__cordl_internal_set_createValue)) ::System::Func_1<T>*  createValue;

/// @brief Field isValueCreated, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isValueCreated, put=__cordl_internal_set_isValueCreated)) bool  isValueCreated;

/// @brief Field padlock, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_padlock, put=__cordl_internal_set_padlock)) ::System::Object*  padlock;

/// @brief Field value, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) T  value;

static inline ::SouthPointe::Serialization::MessagePack::Lazy_1<T>* New_ctor(::System::Func_1<T>*  createValue) ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Func_1<T>* const& __cordl_internal_get_createValue() const;

constexpr ::System::Func_1<T>*& __cordl_internal_get_createValue() ;

constexpr bool const& __cordl_internal_get_isValueCreated() const;

constexpr bool& __cordl_internal_get_isValueCreated() ;

constexpr ::System::Object* const& __cordl_internal_get_padlock() const;

constexpr ::System::Object*& __cordl_internal_get_padlock() ;

constexpr T const& __cordl_internal_get_value() const;

constexpr T& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_createValue(::System::Func_1<T>*  value) ;

constexpr void __cordl_internal_set_isValueCreated(bool  value) ;

constexpr void __cordl_internal_set_padlock(::System::Object*  value) ;

constexpr void __cordl_internal_set_value(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<T>*  createValue) ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Lazy_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Lazy_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Lazy_1(Lazy_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Lazy_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Lazy_1(Lazy_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31756};

/// @brief Field padlock, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___padlock;

/// @brief Field createValue, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<T>*  ___createValue;

/// @brief Field isValueCreated, offset: 0x20, size: 0x1, def value: None
 bool  ___isValueCreated;

/// @brief Field value, offset: 0x28, size: 0x8, def value: None
 T  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def SouthPointe::Serialization::MessagePack
