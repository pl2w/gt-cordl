#pragma once
// IWYU pragma private; include "Fusion/BitSet256.hpp"
#include "Fusion/zzzz__BitSet256__Bits_e__FixedBuffer_impl.hpp"
#include "Fusion/zzzz__BitSet256_def.hpp"
#include "Fusion/zzzz__BitSet256_Enumerator_def.hpp"
#include "Fusion/zzzz__BitSet256_Iterator_def.hpp"
#include "Fusion/zzzz__BitSet256__Bits_e__FixedBuffer_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::BitSet256.GetIterator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitSet256_Iterator (::Fusion::BitSet256::*)()>(&::Fusion::BitSet256::GetIterator)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f9935c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"GetIterator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::BitSet256::*)()>(&::Fusion::BitSet256::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f993dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.FromArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::BitSet256 (*)(::ArrayW<uint64_t>)>(&::Fusion::BitSet256::FromArray)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5f993e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"FromArray", {}, {::i2c::type_of<::ArrayW<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet256::*)(int32_t)>(&::Fusion::BitSet256::Set)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f9952c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"Set", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet256::*)(int32_t)>(&::Fusion::BitSet256::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f9957c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"Clear", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet256::*)(int32_t)>(&::Fusion::BitSet256::get_Item)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f995cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet256::*)(int32_t, bool)>(&::Fusion::BitSet256::set_Item)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f995ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.And
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet256::*)(::Fusion::BitSet256)>(&::Fusion::BitSet256::And)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f9964c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"And", {}, {::i2c::type_of<::Fusion::BitSet256>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.Or
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet256::*)(::Fusion::BitSet256)>(&::Fusion::BitSet256::Or)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f99688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"Or", {}, {::i2c::type_of<::Fusion::BitSet256>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.Xor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet256::*)(::Fusion::BitSet256)>(&::Fusion::BitSet256::Xor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f996c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"Xor", {}, {::i2c::type_of<::Fusion::BitSet256>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.AndNot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet256::*)(::Fusion::BitSet256)>(&::Fusion::BitSet256::AndNot)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f99700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"AndNot", {}, {::i2c::type_of<::Fusion::BitSet256>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.Not
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet256::*)()>(&::Fusion::BitSet256::Not)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f9973c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"Not", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.ClearAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet256::*)()>(&::Fusion::BitSet256::ClearAll)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f99760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"ClearAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.IsSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet256::*)(int32_t)>(&::Fusion::BitSet256::IsSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f9976c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"IsSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.GetSetCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::BitSet256::*)()>(&::Fusion::BitSet256::GetSetCount)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f9978c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"GetSetCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.Any
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet256::*)()>(&::Fusion::BitSet256::Any)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f99828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"Any", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.Empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet256::*)()>(&::Fusion::BitSet256::Empty)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f99858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"Empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::BitSet256::*)()>(&::Fusion::BitSet256::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f99888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::BitSet256>(),
                    {::i2c::class_of<::Fusion::BitSet256>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet256::*)(::System::Object*)>(&::Fusion::BitSet256::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f998d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::BitSet256>(),
                    {::i2c::class_of<::Fusion::BitSet256>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet256::*)(::Fusion::BitSet256)>(&::Fusion::BitSet256::Equals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f99988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::BitSet256>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitSet256_Enumerator (::Fusion::BitSet256::*)()>(&::Fusion::BitSet256::GetEnumerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f999d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>* (::Fusion::BitSet256::*)()>(&::Fusion::BitSet256::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f999ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::BitSet256::*)()>(&::Fusion::BitSet256::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f99a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::BitSet256, ::Fusion::BitSet256)>(&::Fusion::BitSet256::op_Equality)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f99aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::BitSet256>(), ::i2c::type_of<::Fusion::BitSet256>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet256.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::BitSet256, ::Fusion::BitSet256)>(&::Fusion::BitSet256::op_Inequality)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f99aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::BitSet256>(), ::i2c::type_of<::Fusion::BitSet256>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BitSet256__Bits_e__FixedBuffer& Fusion::BitSet256::__cordl_internal_get_Bits()  {
return this->___Bits;
}
constexpr ::GlobalNamespace::BitSet256__Bits_e__FixedBuffer const& Fusion::BitSet256::__cordl_internal_get_Bits() const {
return this->___Bits;
}
constexpr void Fusion::BitSet256::__cordl_internal_set_Bits(::GlobalNamespace::BitSet256__Bits_e__FixedBuffer  value)  {
this->___Bits = value;
}
inline ::GlobalNamespace::BitSet256_Iterator Fusion::BitSet256::GetIterator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"GetIterator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitSet256_Iterator>(*this, ___internal_method);
}
inline int32_t Fusion::BitSet256::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Fusion::BitSet256 Fusion::BitSet256::FromArray(::ArrayW<uint64_t>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"FromArray", {}, {::i2c::type_of<::ArrayW<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::BitSet256>(nullptr, ___internal_method, values);
}
inline void Fusion::BitSet256::Set(int32_t  bit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"Set", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bit);
}
inline void Fusion::BitSet256::Clear(int32_t  bit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"Clear", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bit);
}
inline bool Fusion::BitSet256::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void Fusion::BitSet256::set_Item(int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void Fusion::BitSet256::And(::Fusion::BitSet256  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"And", {}, {::i2c::type_of<::Fusion::BitSet256>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet256::Or(::Fusion::BitSet256  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"Or", {}, {::i2c::type_of<::Fusion::BitSet256>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet256::Xor(::Fusion::BitSet256  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"Xor", {}, {::i2c::type_of<::Fusion::BitSet256>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet256::AndNot(::Fusion::BitSet256  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"AndNot", {}, {::i2c::type_of<::Fusion::BitSet256>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet256::Not()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"Not", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::BitSet256::ClearAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"ClearAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Fusion::BitSet256::IsSet(int32_t  bit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"IsSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, bit);
}
inline int32_t Fusion::BitSet256::GetSetCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"GetSetCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::BitSet256::Any()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"Any", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::BitSet256::Empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"Empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t Fusion::BitSet256::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::BitSet256>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::BitSet256::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::BitSet256>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool Fusion::BitSet256::Equals(::Fusion::BitSet256  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::BitSet256>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::GlobalNamespace::BitSet256_Enumerator Fusion::BitSet256::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitSet256_Enumerator>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* Fusion::BitSet256::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<int32_t>*>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::BitSet256::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
inline bool Fusion::BitSet256::op_Equality(::Fusion::BitSet256  a, ::Fusion::BitSet256  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::BitSet256>(), ::i2c::type_of<::Fusion::BitSet256>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::BitSet256::op_Inequality(::Fusion::BitSet256  a, ::Fusion::BitSet256  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet256>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::BitSet256>(), ::i2c::type_of<::Fusion::BitSet256>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::BitSet256::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::BitSet256::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::BitSet256>"
constexpr  Fusion::BitSet256::operator ::System::IEquatable_1<::Fusion::BitSet256>*()  {
return static_cast<::System::IEquatable_1<::Fusion::BitSet256>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::BitSet256>"
constexpr ::System::IEquatable_1<::Fusion::BitSet256>* Fusion::BitSet256::i___System__IEquatable_1___Fusion__BitSet256_()  {
return static_cast<::System::IEquatable_1<::Fusion::BitSet256>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr  Fusion::BitSet256::operator ::System::Collections::Generic::IEnumerable_1<int32_t>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* Fusion::BitSet256::i___System__Collections__Generic__IEnumerable_1_int32_t_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::BitSet256::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::BitSet256::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Bits", ty: "::GlobalNamespace::BitSet256__Bits_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::BitSet256::BitSet256(::GlobalNamespace::BitSet256__Bits_e__FixedBuffer  Bits) noexcept  {
this->Bits = Bits;
}
// Ctor Parameters []
constexpr ::Fusion::BitSet256::BitSet256()   {
}
