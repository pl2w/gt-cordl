#pragma once
// IWYU pragma private; include "Fusion/BitSet64.hpp"
#include "Fusion/zzzz__BitSet64__Bits_e__FixedBuffer_impl.hpp"
#include "Fusion/zzzz__BitSet64_def.hpp"
#include "Fusion/zzzz__BitSet64_Enumerator_def.hpp"
#include "Fusion/zzzz__BitSet64_Iterator_def.hpp"
#include "Fusion/zzzz__BitSet64__Bits_e__FixedBuffer_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::BitSet64.GetIterator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitSet64_Iterator (::Fusion::BitSet64::*)()>(&::Fusion::BitSet64::GetIterator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f977d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"GetIterator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::BitSet64::*)()>(&::Fusion::BitSet64::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f977f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.FromValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::BitSet64 (*)(uint64_t)>(&::Fusion::BitSet64::FromValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f977f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"FromValue", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.FromArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::BitSet64 (*)(::ArrayW<uint64_t>)>(&::Fusion::BitSet64::FromArray)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f97854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"FromArray", {}, {::i2c::type_of<::ArrayW<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet64::*)(int32_t)>(&::Fusion::BitSet64::Set)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f9790c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"Set", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet64::*)(int32_t)>(&::Fusion::BitSet64::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f9795c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"Clear", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet64::*)(int32_t)>(&::Fusion::BitSet64::get_Item)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f979ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet64::*)(int32_t, bool)>(&::Fusion::BitSet64::set_Item)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f979cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.And
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet64::*)(::Fusion::BitSet64)>(&::Fusion::BitSet64::And)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f97a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"And", {}, {::i2c::type_of<::Fusion::BitSet64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.Or
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet64::*)(::Fusion::BitSet64)>(&::Fusion::BitSet64::Or)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f97a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"Or", {}, {::i2c::type_of<::Fusion::BitSet64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.Xor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet64::*)(::Fusion::BitSet64)>(&::Fusion::BitSet64::Xor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f97a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"Xor", {}, {::i2c::type_of<::Fusion::BitSet64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.AndNot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet64::*)(::Fusion::BitSet64)>(&::Fusion::BitSet64::AndNot)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f97a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"AndNot", {}, {::i2c::type_of<::Fusion::BitSet64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.Not
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet64::*)()>(&::Fusion::BitSet64::Not)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f97a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"Not", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.ClearAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet64::*)()>(&::Fusion::BitSet64::ClearAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f97a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"ClearAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.IsSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet64::*)(int32_t)>(&::Fusion::BitSet64::IsSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f97a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"IsSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.GetSetCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::BitSet64::*)()>(&::Fusion::BitSet64::GetSetCount)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f97aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"GetSetCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.Any
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet64::*)()>(&::Fusion::BitSet64::Any)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f97b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"Any", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.Empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet64::*)()>(&::Fusion::BitSet64::Empty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f97b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"Empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::BitSet64::*)()>(&::Fusion::BitSet64::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f97b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::BitSet64>(),
                    {::i2c::class_of<::Fusion::BitSet64>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet64::*)(::System::Object*)>(&::Fusion::BitSet64::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f97b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::BitSet64>(),
                    {::i2c::class_of<::Fusion::BitSet64>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet64::*)(::Fusion::BitSet64)>(&::Fusion::BitSet64::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f97bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::BitSet64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitSet64_Enumerator (::Fusion::BitSet64::*)()>(&::Fusion::BitSet64::GetEnumerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f97c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>* (::Fusion::BitSet64::*)()>(&::Fusion::BitSet64::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f97c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::BitSet64::*)()>(&::Fusion::BitSet64::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f97c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::BitSet64, ::Fusion::BitSet64)>(&::Fusion::BitSet64::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f97cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::BitSet64>(), ::i2c::type_of<::Fusion::BitSet64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet64.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::BitSet64, ::Fusion::BitSet64)>(&::Fusion::BitSet64::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f97cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::BitSet64>(), ::i2c::type_of<::Fusion::BitSet64>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BitSet64__Bits_e__FixedBuffer& Fusion::BitSet64::__cordl_internal_get_Bits()  {
return this->___Bits;
}
constexpr ::GlobalNamespace::BitSet64__Bits_e__FixedBuffer const& Fusion::BitSet64::__cordl_internal_get_Bits() const {
return this->___Bits;
}
constexpr void Fusion::BitSet64::__cordl_internal_set_Bits(::GlobalNamespace::BitSet64__Bits_e__FixedBuffer  value)  {
this->___Bits = value;
}
inline ::GlobalNamespace::BitSet64_Iterator Fusion::BitSet64::GetIterator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"GetIterator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitSet64_Iterator>(*this, ___internal_method);
}
inline int32_t Fusion::BitSet64::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Fusion::BitSet64 Fusion::BitSet64::FromValue(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"FromValue", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::BitSet64>(nullptr, ___internal_method, value);
}
inline ::Fusion::BitSet64 Fusion::BitSet64::FromArray(::ArrayW<uint64_t>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"FromArray", {}, {::i2c::type_of<::ArrayW<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::BitSet64>(nullptr, ___internal_method, values);
}
inline void Fusion::BitSet64::Set(int32_t  bit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"Set", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bit);
}
inline void Fusion::BitSet64::Clear(int32_t  bit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"Clear", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bit);
}
inline bool Fusion::BitSet64::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void Fusion::BitSet64::set_Item(int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void Fusion::BitSet64::And(::Fusion::BitSet64  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"And", {}, {::i2c::type_of<::Fusion::BitSet64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet64::Or(::Fusion::BitSet64  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"Or", {}, {::i2c::type_of<::Fusion::BitSet64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet64::Xor(::Fusion::BitSet64  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"Xor", {}, {::i2c::type_of<::Fusion::BitSet64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet64::AndNot(::Fusion::BitSet64  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"AndNot", {}, {::i2c::type_of<::Fusion::BitSet64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet64::Not()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"Not", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::BitSet64::ClearAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"ClearAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Fusion::BitSet64::IsSet(int32_t  bit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"IsSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, bit);
}
inline int32_t Fusion::BitSet64::GetSetCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"GetSetCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::BitSet64::Any()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"Any", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::BitSet64::Empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"Empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t Fusion::BitSet64::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::BitSet64>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::BitSet64::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::BitSet64>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool Fusion::BitSet64::Equals(::Fusion::BitSet64  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::BitSet64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::GlobalNamespace::BitSet64_Enumerator Fusion::BitSet64::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitSet64_Enumerator>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* Fusion::BitSet64::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<int32_t>*>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::BitSet64::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
inline bool Fusion::BitSet64::op_Equality(::Fusion::BitSet64  a, ::Fusion::BitSet64  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::BitSet64>(), ::i2c::type_of<::Fusion::BitSet64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::BitSet64::op_Inequality(::Fusion::BitSet64  a, ::Fusion::BitSet64  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet64>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::BitSet64>(), ::i2c::type_of<::Fusion::BitSet64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::BitSet64::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::BitSet64::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::BitSet64>"
constexpr  Fusion::BitSet64::operator ::System::IEquatable_1<::Fusion::BitSet64>*()  {
return static_cast<::System::IEquatable_1<::Fusion::BitSet64>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::BitSet64>"
constexpr ::System::IEquatable_1<::Fusion::BitSet64>* Fusion::BitSet64::i___System__IEquatable_1___Fusion__BitSet64_()  {
return static_cast<::System::IEquatable_1<::Fusion::BitSet64>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr  Fusion::BitSet64::operator ::System::Collections::Generic::IEnumerable_1<int32_t>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* Fusion::BitSet64::i___System__Collections__Generic__IEnumerable_1_int32_t_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::BitSet64::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::BitSet64::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Bits", ty: "::GlobalNamespace::BitSet64__Bits_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::BitSet64::BitSet64(::GlobalNamespace::BitSet64__Bits_e__FixedBuffer  Bits) noexcept  {
this->Bits = Bits;
}
// Ctor Parameters []
constexpr ::Fusion::BitSet64::BitSet64()   {
}
