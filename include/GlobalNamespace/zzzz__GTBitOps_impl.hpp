#pragma once
// IWYU pragma private; include "GlobalNamespace/GTBitOps.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GTBitOps_def.hpp"
#include "GlobalNamespace/zzzz__GTBitOps_BitWriteInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTBitOps.GetValueMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::GlobalNamespace::GTBitOps::GetValueMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5675f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"GetValueMask", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTBitOps.GetClearMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::GlobalNamespace::GTBitOps::GetClearMask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5675f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"GetClearMask", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTBitOps.GetClearMaskByCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::GlobalNamespace::GTBitOps::GetClearMaskByCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5675f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"GetClearMaskByCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTBitOps.ReadBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::GTBitOps::ReadBits)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5675f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"ReadBits", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTBitOps.ReadBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::GlobalNamespace::GTBitOps_BitWriteInfo)>(&::GlobalNamespace::GTBitOps::ReadBits)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5675f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"ReadBits", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GTBitOps_BitWriteInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTBitOps.ReadBitsByCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::GTBitOps::ReadBitsByCount)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5675f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"ReadBitsByCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTBitOps.ReadBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::GlobalNamespace::GTBitOps::ReadBit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5675f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"ReadBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTBitOps.WriteBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, ::GlobalNamespace::GTBitOps_BitWriteInfo, int32_t)>(&::GlobalNamespace::GTBitOps::WriteBits)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5675fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"WriteBits", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::GlobalNamespace::GTBitOps_BitWriteInfo>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTBitOps.WriteBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::GlobalNamespace::GTBitOps_BitWriteInfo, int32_t)>(&::GlobalNamespace::GTBitOps::WriteBits)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5675fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"WriteBits", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GTBitOps_BitWriteInfo>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTBitOps.WriteBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::GTBitOps::WriteBits)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5675fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"WriteBits", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTBitOps.WriteBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::GTBitOps::WriteBits)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5675ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"WriteBits", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTBitOps.WriteBitsByCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, int32_t, int32_t, int32_t)>(&::GlobalNamespace::GTBitOps::WriteBitsByCount)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x567600c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"WriteBitsByCount", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTBitOps.WriteBitsByCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::GTBitOps::WriteBitsByCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5676038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"WriteBitsByCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTBitOps.WriteBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, int32_t, bool)>(&::GlobalNamespace::GTBitOps::WriteBit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x567605c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"WriteBit", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTBitOps.WriteBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, bool)>(&::GlobalNamespace::GTBitOps::WriteBit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5676080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"WriteBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTBitOps.ToBinaryString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::GlobalNamespace::GTBitOps::ToBinaryString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x567609c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"ToBinaryString", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::GTBitOps::GetValueMask(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"GetValueMask", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, count);
}
inline int32_t GlobalNamespace::GTBitOps::GetClearMask(int32_t  index, int32_t  valueMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"GetClearMask", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, index, valueMask);
}
inline int32_t GlobalNamespace::GTBitOps::GetClearMaskByCount(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"GetClearMaskByCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, index, count);
}
inline int32_t GlobalNamespace::GTBitOps::ReadBits(int32_t  bits, int32_t  index, int32_t  valueMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"ReadBits", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bits, index, valueMask);
}
inline int32_t GlobalNamespace::GTBitOps::ReadBits(int32_t  bits, ::GlobalNamespace::GTBitOps_BitWriteInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"ReadBits", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GTBitOps_BitWriteInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bits, info);
}
inline int32_t GlobalNamespace::GTBitOps::ReadBitsByCount(int32_t  bits, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"ReadBitsByCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bits, index, count);
}
inline bool GlobalNamespace::GTBitOps::ReadBit(int32_t  bits, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"ReadBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bits, index);
}
inline void GlobalNamespace::GTBitOps::WriteBits(::by_ref<int32_t>  bits, ::GlobalNamespace::GTBitOps_BitWriteInfo  info, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"WriteBits", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::GlobalNamespace::GTBitOps_BitWriteInfo>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bits, info, value);
}
inline int32_t GlobalNamespace::GTBitOps::WriteBits(int32_t  bits, ::GlobalNamespace::GTBitOps_BitWriteInfo  info, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"WriteBits", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GTBitOps_BitWriteInfo>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bits, info, value);
}
inline void GlobalNamespace::GTBitOps::WriteBits(::by_ref<int32_t>  bits, int32_t  index, int32_t  valueMask, int32_t  clearMask, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"WriteBits", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bits, index, valueMask, clearMask, value);
}
inline int32_t GlobalNamespace::GTBitOps::WriteBits(int32_t  bits, int32_t  index, int32_t  valueMask, int32_t  clearMask, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"WriteBits", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bits, index, valueMask, clearMask, value);
}
inline void GlobalNamespace::GTBitOps::WriteBitsByCount(::by_ref<int32_t>  bits, int32_t  index, int32_t  count, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"WriteBitsByCount", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bits, index, count, value);
}
inline int32_t GlobalNamespace::GTBitOps::WriteBitsByCount(int32_t  bits, int32_t  index, int32_t  count, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"WriteBitsByCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bits, index, count, value);
}
inline void GlobalNamespace::GTBitOps::WriteBit(::by_ref<int32_t>  bits, int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"WriteBit", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bits, index, value);
}
inline int32_t GlobalNamespace::GTBitOps::WriteBit(int32_t  bits, int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"WriteBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bits, index, value);
}
inline ::StringW GlobalNamespace::GTBitOps::ToBinaryString(int32_t  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTBitOps*>(),
                        {"ToBinaryString", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, number);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTBitOps::GTBitOps()   {
}
