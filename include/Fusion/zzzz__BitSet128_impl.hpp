#pragma once
// IWYU pragma private; include "Fusion/BitSet128.hpp"
#include "Fusion/zzzz__BitSet128__Bits_e__FixedBuffer_impl.hpp"
#include "Fusion/zzzz__BitSet128_def.hpp"
#include "Fusion/zzzz__BitSet128_Enumerator_def.hpp"
#include "Fusion/zzzz__BitSet128_Iterator_def.hpp"
#include "Fusion/zzzz__BitSet128__Bits_e__FixedBuffer_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::BitSet128.GetIterator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitSet128_Iterator (::Fusion::BitSet128::*)()>(&::Fusion::BitSet128::GetIterator)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f97f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"GetIterator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::BitSet128::*)()>(&::Fusion::BitSet128::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f97f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.FromArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::BitSet128 (*)(::ArrayW<uint64_t>)>(&::Fusion::BitSet128::FromArray)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5f97f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"FromArray", {}, {::i2c::type_of<::ArrayW<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet128::*)(int32_t)>(&::Fusion::BitSet128::Set)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f98094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"Set", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet128::*)(int32_t)>(&::Fusion::BitSet128::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f980e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"Clear", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet128::*)(int32_t)>(&::Fusion::BitSet128::get_Item)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f98134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet128::*)(int32_t, bool)>(&::Fusion::BitSet128::set_Item)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f98154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.And
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet128::*)(::Fusion::BitSet128)>(&::Fusion::BitSet128::And)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f981b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"And", {}, {::i2c::type_of<::Fusion::BitSet128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.Or
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet128::*)(::Fusion::BitSet128)>(&::Fusion::BitSet128::Or)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f98204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"Or", {}, {::i2c::type_of<::Fusion::BitSet128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.Xor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet128::*)(::Fusion::BitSet128)>(&::Fusion::BitSet128::Xor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f98254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"Xor", {}, {::i2c::type_of<::Fusion::BitSet128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.AndNot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet128::*)(::Fusion::BitSet128)>(&::Fusion::BitSet128::AndNot)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f982a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"AndNot", {}, {::i2c::type_of<::Fusion::BitSet128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.Not
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet128::*)()>(&::Fusion::BitSet128::Not)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f982f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"Not", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.ClearAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet128::*)()>(&::Fusion::BitSet128::ClearAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f98308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"ClearAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.IsSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet128::*)(int32_t)>(&::Fusion::BitSet128::IsSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f98310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"IsSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.GetSetCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::BitSet128::*)()>(&::Fusion::BitSet128::GetSetCount)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f98330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"GetSetCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.Any
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet128::*)()>(&::Fusion::BitSet128::Any)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f983a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"Any", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.Empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet128::*)()>(&::Fusion::BitSet128::Empty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f983c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"Empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::BitSet128::*)()>(&::Fusion::BitSet128::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f983e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::BitSet128>(),
                    {::i2c::class_of<::Fusion::BitSet128>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet128::*)(::System::Object*)>(&::Fusion::BitSet128::Equals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f98438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::BitSet128>(),
                    {::i2c::class_of<::Fusion::BitSet128>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet128::*)(::Fusion::BitSet128)>(&::Fusion::BitSet128::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f984f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::BitSet128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitSet128_Enumerator (::Fusion::BitSet128::*)()>(&::Fusion::BitSet128::GetEnumerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f98554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>* (::Fusion::BitSet128::*)()>(&::Fusion::BitSet128::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f9856c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::BitSet128::*)()>(&::Fusion::BitSet128::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f985c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::BitSet128, ::Fusion::BitSet128)>(&::Fusion::BitSet128::op_Equality)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f98624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::BitSet128>(), ::i2c::type_of<::Fusion::BitSet128>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet128.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::BitSet128, ::Fusion::BitSet128)>(&::Fusion::BitSet128::op_Inequality)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f98680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::BitSet128>(), ::i2c::type_of<::Fusion::BitSet128>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BitSet128__Bits_e__FixedBuffer& Fusion::BitSet128::__cordl_internal_get_Bits()  {
return this->___Bits;
}
constexpr ::GlobalNamespace::BitSet128__Bits_e__FixedBuffer const& Fusion::BitSet128::__cordl_internal_get_Bits() const {
return this->___Bits;
}
constexpr void Fusion::BitSet128::__cordl_internal_set_Bits(::GlobalNamespace::BitSet128__Bits_e__FixedBuffer  value)  {
this->___Bits = value;
}
inline ::GlobalNamespace::BitSet128_Iterator Fusion::BitSet128::GetIterator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"GetIterator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitSet128_Iterator>(*this, ___internal_method);
}
inline int32_t Fusion::BitSet128::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Fusion::BitSet128 Fusion::BitSet128::FromArray(::ArrayW<uint64_t>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"FromArray", {}, {::i2c::type_of<::ArrayW<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::BitSet128>(nullptr, ___internal_method, values);
}
inline void Fusion::BitSet128::Set(int32_t  bit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"Set", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bit);
}
inline void Fusion::BitSet128::Clear(int32_t  bit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"Clear", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bit);
}
inline bool Fusion::BitSet128::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void Fusion::BitSet128::set_Item(int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void Fusion::BitSet128::And(::Fusion::BitSet128  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"And", {}, {::i2c::type_of<::Fusion::BitSet128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet128::Or(::Fusion::BitSet128  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"Or", {}, {::i2c::type_of<::Fusion::BitSet128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet128::Xor(::Fusion::BitSet128  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"Xor", {}, {::i2c::type_of<::Fusion::BitSet128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet128::AndNot(::Fusion::BitSet128  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"AndNot", {}, {::i2c::type_of<::Fusion::BitSet128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet128::Not()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"Not", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::BitSet128::ClearAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"ClearAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Fusion::BitSet128::IsSet(int32_t  bit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"IsSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, bit);
}
inline int32_t Fusion::BitSet128::GetSetCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"GetSetCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::BitSet128::Any()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"Any", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::BitSet128::Empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"Empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t Fusion::BitSet128::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::BitSet128>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::BitSet128::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::BitSet128>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool Fusion::BitSet128::Equals(::Fusion::BitSet128  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::BitSet128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::GlobalNamespace::BitSet128_Enumerator Fusion::BitSet128::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitSet128_Enumerator>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* Fusion::BitSet128::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<int32_t>*>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::BitSet128::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
inline bool Fusion::BitSet128::op_Equality(::Fusion::BitSet128  a, ::Fusion::BitSet128  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::BitSet128>(), ::i2c::type_of<::Fusion::BitSet128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::BitSet128::op_Inequality(::Fusion::BitSet128  a, ::Fusion::BitSet128  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet128>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::BitSet128>(), ::i2c::type_of<::Fusion::BitSet128>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::BitSet128::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::BitSet128::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::BitSet128>"
constexpr  Fusion::BitSet128::operator ::System::IEquatable_1<::Fusion::BitSet128>*()  {
return static_cast<::System::IEquatable_1<::Fusion::BitSet128>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::BitSet128>"
constexpr ::System::IEquatable_1<::Fusion::BitSet128>* Fusion::BitSet128::i___System__IEquatable_1___Fusion__BitSet128_()  {
return static_cast<::System::IEquatable_1<::Fusion::BitSet128>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr  Fusion::BitSet128::operator ::System::Collections::Generic::IEnumerable_1<int32_t>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* Fusion::BitSet128::i___System__Collections__Generic__IEnumerable_1_int32_t_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::BitSet128::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::BitSet128::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Bits", ty: "::GlobalNamespace::BitSet128__Bits_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::BitSet128::BitSet128(::GlobalNamespace::BitSet128__Bits_e__FixedBuffer  Bits) noexcept  {
this->Bits = Bits;
}
// Ctor Parameters []
constexpr ::Fusion::BitSet128::BitSet128()   {
}
