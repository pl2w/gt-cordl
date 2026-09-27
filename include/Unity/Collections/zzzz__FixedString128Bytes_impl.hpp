#pragma once
// IWYU pragma private; include "Unity/Collections/FixedString128Bytes.hpp"
#include "Unity/Collections/zzzz__FixedBytes126_impl.hpp"
#include "Unity/Collections/zzzz__FixedString128Bytes_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__FixedString32Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString4096Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString512Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString64Bytes_def.hpp"
#include "Unity/Collections/zzzz__IIndexable_1_def.hpp"
#include "Unity/Collections/zzzz__INativeList_1_def.hpp"
#include "Unity/Collections/zzzz__IUTF8Bytes_def.hpp"
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Collections::FixedString128Bytes::*)()>(&::Unity::Collections::FixedString128Bytes::get_Value)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf04fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.GetUnsafePtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::Unity::Collections::FixedString128Bytes::*)()>(&::Unity::Collections::FixedString128Bytes::GetUnsafePtr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf05020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"GetUnsafePtr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString128Bytes::*)()>(&::Unity::Collections::FixedString128Bytes::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf05028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.set_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::FixedString128Bytes::*)(int32_t)>(&::Unity::Collections::FixedString128Bytes::set_Length)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf05030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"set_Length", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString128Bytes::*)()>(&::Unity::Collections::FixedString128Bytes::get_Capacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf05040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString128Bytes::*)(::StringW)>(&::Unity::Collections::FixedString128Bytes::CompareTo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaf05048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"CompareTo", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString128Bytes::*)(::StringW)>(&::Unity::Collections::FixedString128Bytes::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaf0506c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"Equals", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString128Bytes::*)(::Unity::Collections::FixedString32Bytes)>(&::Unity::Collections::FixedString128Bytes::CompareTo)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf050fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"CompareTo", {}, {::i2c::type_of<::Unity::Collections::FixedString32Bytes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString128Bytes>, ::by_ref<::Unity::Collections::FixedString32Bytes>)>(&::Unity::Collections::FixedString128Bytes::op_Equality)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaf05154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"op_Equality", {}, {::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString128Bytes::*)(::Unity::Collections::FixedString32Bytes)>(&::Unity::Collections::FixedString128Bytes::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf05208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Collections::FixedString32Bytes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString128Bytes::*)(::Unity::Collections::FixedString64Bytes)>(&::Unity::Collections::FixedString128Bytes::CompareTo)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf0520c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"CompareTo", {}, {::i2c::type_of<::Unity::Collections::FixedString64Bytes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString128Bytes>, ::by_ref<::Unity::Collections::FixedString64Bytes>)>(&::Unity::Collections::FixedString128Bytes::op_Equality)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaf05264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"op_Equality", {}, {::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString128Bytes::*)(::Unity::Collections::FixedString64Bytes)>(&::Unity::Collections::FixedString128Bytes::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf05318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Collections::FixedString64Bytes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString128Bytes::*)(::Unity::Collections::FixedString128Bytes)>(&::Unity::Collections::FixedString128Bytes::CompareTo)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf0531c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"CompareTo", {}, {::i2c::type_of<::Unity::Collections::FixedString128Bytes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString128Bytes>, ::by_ref<::Unity::Collections::FixedString128Bytes>)>(&::Unity::Collections::FixedString128Bytes::op_Equality)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xaf05374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"op_Equality", {}, {::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString128Bytes::*)(::Unity::Collections::FixedString128Bytes)>(&::Unity::Collections::FixedString128Bytes::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf05414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Collections::FixedString128Bytes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString128Bytes::*)(::Unity::Collections::FixedString512Bytes)>(&::Unity::Collections::FixedString128Bytes::CompareTo)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf05418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"CompareTo", {}, {::i2c::type_of<::Unity::Collections::FixedString512Bytes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString128Bytes>, ::by_ref<::Unity::Collections::FixedString512Bytes>)>(&::Unity::Collections::FixedString128Bytes::op_Equality)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaf05470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"op_Equality", {}, {::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString128Bytes::*)(::Unity::Collections::FixedString512Bytes)>(&::Unity::Collections::FixedString128Bytes::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf05524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Collections::FixedString512Bytes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString128Bytes::*)(::Unity::Collections::FixedString4096Bytes)>(&::Unity::Collections::FixedString128Bytes::CompareTo)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaf05528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"CompareTo", {}, {::i2c::type_of<::Unity::Collections::FixedString4096Bytes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::FixedString128Bytes>, ::by_ref<::Unity::Collections::FixedString4096Bytes>)>(&::Unity::Collections::FixedString128Bytes::op_Equality)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaf05580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"op_Equality", {}, {::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString128Bytes::*)(::Unity::Collections::FixedString4096Bytes)>(&::Unity::Collections::FixedString128Bytes::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf05634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Collections::FixedString4096Bytes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Collections::FixedString128Bytes::*)()>(&::Unity::Collections::FixedString128Bytes::ToString)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaf04fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                    {::i2c::class_of<::Unity::Collections::FixedString128Bytes>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::FixedString128Bytes::*)()>(&::Unity::Collections::FixedString128Bytes::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaf05638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                    {::i2c::class_of<::Unity::Collections::FixedString128Bytes>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedString128Bytes.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::FixedString128Bytes::*)(::System::Object*)>(&::Unity::Collections::FixedString128Bytes::Equals)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xaf05680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                    {::i2c::class_of<::Unity::Collections::FixedString128Bytes>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::StringW Unity::Collections::FixedString128Bytes::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline uint8_t* Unity::Collections::FixedString128Bytes::GetUnsafePtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"GetUnsafePtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
inline int32_t Unity::Collections::FixedString128Bytes::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::FixedString128Bytes::set_Length(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"set_Length", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Unity::Collections::FixedString128Bytes::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Unity::Collections::FixedString128Bytes::CompareTo(::StringW  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"CompareTo", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::FixedString128Bytes::Equals(::StringW  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"Equals", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::FixedString128Bytes::CompareTo(::Unity::Collections::FixedString32Bytes  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"CompareTo", {}, {::i2c::type_of<::Unity::Collections::FixedString32Bytes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::FixedString128Bytes::op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"op_Equality", {}, {::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString128Bytes::Equals(::Unity::Collections::FixedString32Bytes  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Collections::FixedString32Bytes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::FixedString128Bytes::CompareTo(::Unity::Collections::FixedString64Bytes  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"CompareTo", {}, {::i2c::type_of<::Unity::Collections::FixedString64Bytes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::FixedString128Bytes::op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString64Bytes>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"op_Equality", {}, {::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString128Bytes::Equals(::Unity::Collections::FixedString64Bytes  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Collections::FixedString64Bytes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::FixedString128Bytes::CompareTo(::Unity::Collections::FixedString128Bytes  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"CompareTo", {}, {::i2c::type_of<::Unity::Collections::FixedString128Bytes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::FixedString128Bytes::op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"op_Equality", {}, {::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString128Bytes::Equals(::Unity::Collections::FixedString128Bytes  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Collections::FixedString128Bytes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::FixedString128Bytes::CompareTo(::Unity::Collections::FixedString512Bytes  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"CompareTo", {}, {::i2c::type_of<::Unity::Collections::FixedString512Bytes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::FixedString128Bytes::op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"op_Equality", {}, {::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString128Bytes::Equals(::Unity::Collections::FixedString512Bytes  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Collections::FixedString512Bytes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Unity::Collections::FixedString128Bytes::CompareTo(::Unity::Collections::FixedString4096Bytes  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"CompareTo", {}, {::i2c::type_of<::Unity::Collections::FixedString4096Bytes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Unity::Collections::FixedString128Bytes::op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"op_Equality", {}, {::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString4096Bytes>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Unity::Collections::FixedString128Bytes::Equals(::Unity::Collections::FixedString4096Bytes  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedString128Bytes>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Collections::FixedString4096Bytes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW Unity::Collections::FixedString128Bytes::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Collections::FixedString128Bytes>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t Unity::Collections::FixedString128Bytes::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Collections::FixedString128Bytes>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Unity::Collections::FixedString128Bytes::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Collections::FixedString128Bytes>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
/// @brief Convert operator to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr  Unity::Collections::FixedString128Bytes::operator ::Unity::Collections::INativeList_1<uint8_t>*()  {
return static_cast<::Unity::Collections::INativeList_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr ::Unity::Collections::INativeList_1<uint8_t>* Unity::Collections::FixedString128Bytes::i___Unity__Collections__INativeList_1_uint8_t_()  {
return static_cast<::Unity::Collections::INativeList_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr  Unity::Collections::FixedString128Bytes::operator ::Unity::Collections::IIndexable_1<uint8_t>*()  {
return static_cast<::Unity::Collections::IIndexable_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr ::Unity::Collections::IIndexable_1<uint8_t>* Unity::Collections::FixedString128Bytes::i___Unity__Collections__IIndexable_1_uint8_t_()  {
return static_cast<::Unity::Collections::IIndexable_1<uint8_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::IUTF8Bytes"
constexpr  Unity::Collections::FixedString128Bytes::operator ::Unity::Collections::IUTF8Bytes*()  {
return static_cast<::Unity::Collections::IUTF8Bytes*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IUTF8Bytes"
constexpr ::Unity::Collections::IUTF8Bytes* Unity::Collections::FixedString128Bytes::i___Unity__Collections__IUTF8Bytes()  {
return static_cast<::Unity::Collections::IUTF8Bytes*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::StringW>"
constexpr  Unity::Collections::FixedString128Bytes::operator ::System::IComparable_1<::StringW>*()  {
return static_cast<::System::IComparable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::StringW>"
constexpr ::System::IComparable_1<::StringW>* Unity::Collections::FixedString128Bytes::i___System__IComparable_1___StringW_()  {
return static_cast<::System::IComparable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::StringW>"
constexpr  Unity::Collections::FixedString128Bytes::operator ::System::IEquatable_1<::StringW>*()  {
return static_cast<::System::IEquatable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::StringW>"
constexpr ::System::IEquatable_1<::StringW>* Unity::Collections::FixedString128Bytes::i___System__IEquatable_1___StringW_()  {
return static_cast<::System::IEquatable_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr  Unity::Collections::FixedString128Bytes::operator ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>* Unity::Collections::FixedString128Bytes::i___System__IComparable_1___Unity__Collections__FixedString32Bytes_()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr  Unity::Collections::FixedString128Bytes::operator ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>* Unity::Collections::FixedString128Bytes::i___System__IEquatable_1___Unity__Collections__FixedString32Bytes_()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr  Unity::Collections::FixedString128Bytes::operator ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>* Unity::Collections::FixedString128Bytes::i___System__IComparable_1___Unity__Collections__FixedString64Bytes_()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr  Unity::Collections::FixedString128Bytes::operator ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>* Unity::Collections::FixedString128Bytes::i___System__IEquatable_1___Unity__Collections__FixedString64Bytes_()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr  Unity::Collections::FixedString128Bytes::operator ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>* Unity::Collections::FixedString128Bytes::i___System__IComparable_1___Unity__Collections__FixedString128Bytes_()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr  Unity::Collections::FixedString128Bytes::operator ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>* Unity::Collections::FixedString128Bytes::i___System__IEquatable_1___Unity__Collections__FixedString128Bytes_()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr  Unity::Collections::FixedString128Bytes::operator ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>* Unity::Collections::FixedString128Bytes::i___System__IComparable_1___Unity__Collections__FixedString512Bytes_()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr  Unity::Collections::FixedString128Bytes::operator ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>* Unity::Collections::FixedString128Bytes::i___System__IEquatable_1___Unity__Collections__FixedString512Bytes_()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr  Unity::Collections::FixedString128Bytes::operator ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>* Unity::Collections::FixedString128Bytes::i___System__IComparable_1___Unity__Collections__FixedString4096Bytes_()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr  Unity::Collections::FixedString128Bytes::operator ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>* Unity::Collections::FixedString128Bytes::i___System__IEquatable_1___Unity__Collections__FixedString4096Bytes_()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "utf8LengthInBytes", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bytes", ty: "::Unity::Collections::FixedBytes126", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Collections::FixedString128Bytes::FixedString128Bytes(uint16_t  utf8LengthInBytes, ::Unity::Collections::FixedBytes126  bytes) noexcept  {
this->utf8LengthInBytes = utf8LengthInBytes;
this->bytes = bytes;
}
// Ctor Parameters []
constexpr ::Unity::Collections::FixedString128Bytes::FixedString128Bytes()   {
}
