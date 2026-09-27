#pragma once
// IWYU pragma private; include "Fusion/BitSet512.hpp"
#include "Fusion/zzzz__BitSet512__Bits_e__FixedBuffer_impl.hpp"
#include "Fusion/zzzz__BitSet512_def.hpp"
#include "Fusion/zzzz__BitSet512_Enumerator_def.hpp"
#include "Fusion/zzzz__BitSet512_Iterator_def.hpp"
#include "Fusion/zzzz__BitSet512__Bits_e__FixedBuffer_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::BitSet512.GetIterator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitSet512_Iterator (::Fusion::BitSet512::*)()>(&::Fusion::BitSet512::GetIterator)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f99d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"GetIterator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::BitSet512::*)()>(&::Fusion::BitSet512::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f99e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.FromArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::BitSet512 (*)(::ArrayW<uint64_t>)>(&::Fusion::BitSet512::FromArray)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5f99e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"FromArray", {}, {::i2c::type_of<::ArrayW<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet512::*)(int32_t)>(&::Fusion::BitSet512::Set)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f99f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"Set", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet512::*)(int32_t)>(&::Fusion::BitSet512::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f99fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"Clear", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet512::*)(int32_t)>(&::Fusion::BitSet512::get_Item)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f9a00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet512::*)(int32_t, bool)>(&::Fusion::BitSet512::set_Item)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f9a02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.And
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet512::*)(::Fusion::BitSet512)>(&::Fusion::BitSet512::And)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f9a08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"And", {}, {::i2c::type_of<::Fusion::BitSet512>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.Or
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet512::*)(::Fusion::BitSet512)>(&::Fusion::BitSet512::Or)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f9a100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"Or", {}, {::i2c::type_of<::Fusion::BitSet512>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.Xor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet512::*)(::Fusion::BitSet512)>(&::Fusion::BitSet512::Xor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f9a174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"Xor", {}, {::i2c::type_of<::Fusion::BitSet512>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.AndNot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet512::*)(::Fusion::BitSet512)>(&::Fusion::BitSet512::AndNot)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f9a1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"AndNot", {}, {::i2c::type_of<::Fusion::BitSet512>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.Not
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet512::*)()>(&::Fusion::BitSet512::Not)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f9a25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"Not", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.ClearAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::BitSet512::*)()>(&::Fusion::BitSet512::ClearAll)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f9a2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"ClearAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.IsSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet512::*)(int32_t)>(&::Fusion::BitSet512::IsSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f9a2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"IsSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.GetSetCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::BitSet512::*)()>(&::Fusion::BitSet512::GetSetCount)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f9a2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"GetSetCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.Any
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet512::*)()>(&::Fusion::BitSet512::Any)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f9a3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"Any", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.Empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet512::*)()>(&::Fusion::BitSet512::Empty)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f9a3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"Empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::BitSet512::*)()>(&::Fusion::BitSet512::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f9a448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::BitSet512>(),
                    {::i2c::class_of<::Fusion::BitSet512>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet512::*)(::System::Object*)>(&::Fusion::BitSet512::Equals)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f9a498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::BitSet512>(),
                    {::i2c::class_of<::Fusion::BitSet512>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::BitSet512::*)(::Fusion::BitSet512)>(&::Fusion::BitSet512::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f9a550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::BitSet512>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitSet512_Enumerator (::Fusion::BitSet512::*)()>(&::Fusion::BitSet512::GetEnumerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9a5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>* (::Fusion::BitSet512::*)()>(&::Fusion::BitSet512::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f9a5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::BitSet512::*)()>(&::Fusion::BitSet512::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f9a650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::BitSet512, ::Fusion::BitSet512)>(&::Fusion::BitSet512::op_Equality)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f9a6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::BitSet512>(), ::i2c::type_of<::Fusion::BitSet512>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::BitSet512.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::BitSet512, ::Fusion::BitSet512)>(&::Fusion::BitSet512::op_Inequality)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f9a6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::BitSet512>(), ::i2c::type_of<::Fusion::BitSet512>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BitSet512__Bits_e__FixedBuffer& Fusion::BitSet512::__cordl_internal_get_Bits()  {
return this->___Bits;
}
constexpr ::GlobalNamespace::BitSet512__Bits_e__FixedBuffer const& Fusion::BitSet512::__cordl_internal_get_Bits() const {
return this->___Bits;
}
constexpr void Fusion::BitSet512::__cordl_internal_set_Bits(::GlobalNamespace::BitSet512__Bits_e__FixedBuffer  value)  {
this->___Bits = value;
}
inline ::GlobalNamespace::BitSet512_Iterator Fusion::BitSet512::GetIterator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"GetIterator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitSet512_Iterator>(*this, ___internal_method);
}
inline int32_t Fusion::BitSet512::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Fusion::BitSet512 Fusion::BitSet512::FromArray(::ArrayW<uint64_t>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"FromArray", {}, {::i2c::type_of<::ArrayW<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::BitSet512>(nullptr, ___internal_method, values);
}
inline void Fusion::BitSet512::Set(int32_t  bit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"Set", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bit);
}
inline void Fusion::BitSet512::Clear(int32_t  bit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"Clear", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bit);
}
inline bool Fusion::BitSet512::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void Fusion::BitSet512::set_Item(int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void Fusion::BitSet512::And(::Fusion::BitSet512  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"And", {}, {::i2c::type_of<::Fusion::BitSet512>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet512::Or(::Fusion::BitSet512  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"Or", {}, {::i2c::type_of<::Fusion::BitSet512>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet512::Xor(::Fusion::BitSet512  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"Xor", {}, {::i2c::type_of<::Fusion::BitSet512>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet512::AndNot(::Fusion::BitSet512  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"AndNot", {}, {::i2c::type_of<::Fusion::BitSet512>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Fusion::BitSet512::Not()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"Not", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::BitSet512::ClearAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"ClearAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Fusion::BitSet512::IsSet(int32_t  bit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"IsSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, bit);
}
inline int32_t Fusion::BitSet512::GetSetCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"GetSetCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::BitSet512::Any()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"Any", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::BitSet512::Empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"Empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t Fusion::BitSet512::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::BitSet512>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::BitSet512::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::BitSet512>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool Fusion::BitSet512::Equals(::Fusion::BitSet512  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::BitSet512>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::GlobalNamespace::BitSet512_Enumerator Fusion::BitSet512::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitSet512_Enumerator>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* Fusion::BitSet512::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<int32_t>*>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::BitSet512::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
inline bool Fusion::BitSet512::op_Equality(::Fusion::BitSet512  a, ::Fusion::BitSet512  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::BitSet512>(), ::i2c::type_of<::Fusion::BitSet512>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::BitSet512::op_Inequality(::Fusion::BitSet512  a, ::Fusion::BitSet512  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::BitSet512>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::BitSet512>(), ::i2c::type_of<::Fusion::BitSet512>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::BitSet512::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::BitSet512::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::BitSet512>"
constexpr  Fusion::BitSet512::operator ::System::IEquatable_1<::Fusion::BitSet512>*()  {
return static_cast<::System::IEquatable_1<::Fusion::BitSet512>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::BitSet512>"
constexpr ::System::IEquatable_1<::Fusion::BitSet512>* Fusion::BitSet512::i___System__IEquatable_1___Fusion__BitSet512_()  {
return static_cast<::System::IEquatable_1<::Fusion::BitSet512>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr  Fusion::BitSet512::operator ::System::Collections::Generic::IEnumerable_1<int32_t>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* Fusion::BitSet512::i___System__Collections__Generic__IEnumerable_1_int32_t_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::BitSet512::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::BitSet512::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Bits", ty: "::GlobalNamespace::BitSet512__Bits_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::BitSet512::BitSet512(::GlobalNamespace::BitSet512__Bits_e__FixedBuffer  Bits) noexcept  {
this->Bits = Bits;
}
// Ctor Parameters []
constexpr ::Fusion::BitSet512::BitSet512()   {
}
