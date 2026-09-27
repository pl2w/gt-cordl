#pragma once
// IWYU pragma private; include "Fusion/BitSet192.hpp"
#include "Fusion/zzzz__BitSet192__Bits_e__FixedBuffer_impl.hpp"
#include "Fusion/zzzz__BitSet192_def.hpp"
#include "Fusion/zzzz__BitSet192_Enumerator_def.hpp"
#include "Fusion/zzzz__BitSet192_Iterator_def.hpp"
#include "Fusion/zzzz__BitSet192__Bits_e__FixedBuffer_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::BitSet192.GetIterator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitSet192_Iterator (::Fusion::BitSet192::*)()>(&::Fusion::BitSet192::GetIterator)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f98914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"GetIterator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::BitSet192::*)()>(&::Fusion::BitSet192::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f98998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.FromArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::BitSet192 (*)(::ArrayW<uint64_t>)>(&::Fusion::BitSet192::FromArray)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5f989a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"FromArray", {}, {::i2c::type_of<::ArrayW<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet192::*)(int32_t)>(&::Fusion::BitSet192::Set)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f98af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"Set", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet192::*)(int32_t)>(&::Fusion::BitSet192::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f98b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"Clear", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet192::*)(int32_t)>(&::Fusion::BitSet192::get_Item)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f98b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet192::*)(int32_t, bool)>(&::Fusion::BitSet192::set_Item)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f98bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.And
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet192::*)(::Fusion::BitSet192)>(&::Fusion::BitSet192::And)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f98c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"And", {}, {::i2c::type_of<::Fusion::BitSet192>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.Or
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet192::*)(::Fusion::BitSet192)>(&::Fusion::BitSet192::Or)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f98c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"Or", {}, {::i2c::type_of<::Fusion::BitSet192>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.Xor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet192::*)(::Fusion::BitSet192)>(&::Fusion::BitSet192::Xor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f98c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"Xor", {}, {::i2c::type_of<::Fusion::BitSet192>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.AndNot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet192::*)(::Fusion::BitSet192)>(&::Fusion::BitSet192::AndNot)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f98ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"AndNot", {}, {::i2c::type_of<::Fusion::BitSet192>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.Not
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet192::*)()>(&::Fusion::BitSet192::Not)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f98cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"Not", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.ClearAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet192::*)()>(&::Fusion::BitSet192::ClearAll)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f98cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"ClearAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.IsSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet192::*)(int32_t)>(&::Fusion::BitSet192::IsSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f98d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"IsSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.GetSetCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::BitSet192::*)()>(&::Fusion::BitSet192::GetSetCount)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f98d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"GetSetCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.Any
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet192::*)()>(&::Fusion::BitSet192::Any)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f98da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"Any", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.Empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet192::*)()>(&::Fusion::BitSet192::Empty)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f98dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"Empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::BitSet192::*)()>(&::Fusion::BitSet192::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f98df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::BitSet192>(),
                    {::i2c::class_of<::Fusion::BitSet192>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet192::*)(::System::Object*)>(&::Fusion::BitSet192::Equals)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f98e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::BitSet192>(),
                    {::i2c::class_of<::Fusion::BitSet192>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet192::*)(::Fusion::BitSet192)>(&::Fusion::BitSet192::Equals)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f98f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::BitSet192>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitSet192_Enumerator (::Fusion::BitSet192::*)()>(&::Fusion::BitSet192::GetEnumerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f98f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>* (::Fusion::BitSet192::*)()>(&::Fusion::BitSet192::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f98f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::BitSet192::*)()>(&::Fusion::BitSet192::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f98fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::BitSet192, ::Fusion::BitSet192)>(&::Fusion::BitSet192::op_Equality)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f9902c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::BitSet192>(), ::i2c::type_of<::Fusion::BitSet192>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet192.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::BitSet192, ::Fusion::BitSet192)>(&::Fusion::BitSet192::op_Inequality)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f990a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::BitSet192>(), ::i2c::type_of<::Fusion::BitSet192>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BitSet192__Bits_e__FixedBuffer& Fusion::BitSet192::__cordl_internal_get_Bits()  {
return this->___Bits;
}
constexpr ::GlobalNamespace::BitSet192__Bits_e__FixedBuffer const& Fusion::BitSet192::__cordl_internal_get_Bits() const {
return this->___Bits;
}
constexpr void Fusion::BitSet192::__cordl_internal_set_Bits(::GlobalNamespace::BitSet192__Bits_e__FixedBuffer  value)  {
this->___Bits = value;
}
inline ::GlobalNamespace::BitSet192_Iterator Fusion::BitSet192::GetIterator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"GetIterator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitSet192_Iterator>(*this, ___internal_method);
}
inline int32_t Fusion::BitSet192::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Fusion::BitSet192 Fusion::BitSet192::FromArray(::ArrayW<uint64_t>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"FromArray", {}, {::i2c::type_of<::ArrayW<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::BitSet192>(nullptr, ___internal_method, values);
}
inline void Fusion::BitSet192::Set(int32_t  bit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"Set", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bit);
}
inline void Fusion::BitSet192::Clear(int32_t  bit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"Clear", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bit);
}
inline bool Fusion::BitSet192::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void Fusion::BitSet192::set_Item(int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void Fusion::BitSet192::And(::Fusion::BitSet192  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"And", {}, {::i2c::type_of<::Fusion::BitSet192>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet192::Or(::Fusion::BitSet192  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"Or", {}, {::i2c::type_of<::Fusion::BitSet192>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet192::Xor(::Fusion::BitSet192  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"Xor", {}, {::i2c::type_of<::Fusion::BitSet192>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet192::AndNot(::Fusion::BitSet192  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"AndNot", {}, {::i2c::type_of<::Fusion::BitSet192>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet192::Not()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"Not", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::BitSet192::ClearAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"ClearAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Fusion::BitSet192::IsSet(int32_t  bit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"IsSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, bit);
}
inline int32_t Fusion::BitSet192::GetSetCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"GetSetCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::BitSet192::Any()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"Any", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::BitSet192::Empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"Empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t Fusion::BitSet192::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::BitSet192>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::BitSet192::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::BitSet192>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool Fusion::BitSet192::Equals(::Fusion::BitSet192  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::BitSet192>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::GlobalNamespace::BitSet192_Enumerator Fusion::BitSet192::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitSet192_Enumerator>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* Fusion::BitSet192::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<int32_t>*>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::BitSet192::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
inline bool Fusion::BitSet192::op_Equality(::Fusion::BitSet192  a, ::Fusion::BitSet192  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::BitSet192>(), ::i2c::type_of<::Fusion::BitSet192>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::BitSet192::op_Inequality(::Fusion::BitSet192  a, ::Fusion::BitSet192  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet192>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::BitSet192>(), ::i2c::type_of<::Fusion::BitSet192>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::BitSet192::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::BitSet192::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::BitSet192>"
constexpr  Fusion::BitSet192::operator ::System::IEquatable_1<::Fusion::BitSet192>*()  {
return static_cast<::System::IEquatable_1<::Fusion::BitSet192>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::BitSet192>"
constexpr ::System::IEquatable_1<::Fusion::BitSet192>* Fusion::BitSet192::i___System__IEquatable_1___Fusion__BitSet192_()  {
return static_cast<::System::IEquatable_1<::Fusion::BitSet192>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr  Fusion::BitSet192::operator ::System::Collections::Generic::IEnumerable_1<int32_t>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* Fusion::BitSet192::i___System__Collections__Generic__IEnumerable_1_int32_t_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::BitSet192::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::BitSet192::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Bits", ty: "::GlobalNamespace::BitSet192__Bits_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::BitSet192::BitSet192(::GlobalNamespace::BitSet192__Bits_e__FixedBuffer  Bits) noexcept  {
this->Bits = Bits;
}
// Ctor Parameters []
constexpr ::Fusion::BitSet192::BitSet192()   {
}
