#pragma once
// IWYU pragma private; include "System/Numerics/BitOperations.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Numerics/zzzz__BitOperations_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::Numerics::BitOperations.get_TrailingZeroCountDeBruijn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<uint8_t> (*)()>(&::System::Numerics::BitOperations::get_TrailingZeroCountDeBruijn)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb9a9468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"get_TrailingZeroCountDeBruijn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BitOperations.get_Log2DeBruijn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<uint8_t> (*)()>(&::System::Numerics::BitOperations::get_Log2DeBruijn)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb9a94b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"get_Log2DeBruijn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BitOperations.LeadingZeroCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t)>(&::System::Numerics::BitOperations::LeadingZeroCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb9a9508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"LeadingZeroCount", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BitOperations.LeadingZeroCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t)>(&::System::Numerics::BitOperations::LeadingZeroCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb9a95b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"LeadingZeroCount", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BitOperations.Log2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t)>(&::System::Numerics::BitOperations::Log2)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb9a95ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"Log2", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BitOperations.Log2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t)>(&::System::Numerics::BitOperations::Log2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb9a95f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"Log2", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BitOperations.Log2SoftwareFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t)>(&::System::Numerics::BitOperations::Log2SoftwareFallback)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb9a952c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"Log2SoftwareFallback", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BitOperations.PopCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t)>(&::System::Numerics::BitOperations::PopCount)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb9a9614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"PopCount", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BitOperations.PopCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t)>(&::System::Numerics::BitOperations::PopCount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb9a9628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"PopCount", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BitOperations.TrailingZeroCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Numerics::BitOperations::TrailingZeroCount)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb9a9684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"TrailingZeroCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BitOperations.TrailingZeroCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t)>(&::System::Numerics::BitOperations::TrailingZeroCount)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb9a970c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"TrailingZeroCount", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BitOperations.TrailingZeroCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t)>(&::System::Numerics::BitOperations::TrailingZeroCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9a9790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"TrailingZeroCount", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BitOperations.TrailingZeroCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t)>(&::System::Numerics::BitOperations::TrailingZeroCount)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb9a9798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"TrailingZeroCount", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BitOperations.RotateLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, int32_t)>(&::System::Numerics::BitOperations::RotateLeft)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb9a988c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"RotateLeft", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BitOperations.RotateLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, int32_t)>(&::System::Numerics::BitOperations::RotateLeft)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb9a9898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"RotateLeft", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BitOperations.RotateRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, int32_t)>(&::System::Numerics::BitOperations::RotateRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9a98a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"RotateRight", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Numerics::BitOperations.RotateRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, int32_t)>(&::System::Numerics::BitOperations::RotateRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9a98ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"RotateRight", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::ReadOnlySpan_1<uint8_t> System::Numerics::BitOperations::get_TrailingZeroCountDeBruijn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"get_TrailingZeroCountDeBruijn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>>(nullptr, ___internal_method);
}
inline ::System::ReadOnlySpan_1<uint8_t> System::Numerics::BitOperations::get_Log2DeBruijn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"get_Log2DeBruijn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>>(nullptr, ___internal_method);
}
inline int32_t System::Numerics::BitOperations::LeadingZeroCount(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"LeadingZeroCount", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Numerics::BitOperations::LeadingZeroCount(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"LeadingZeroCount", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Numerics::BitOperations::Log2(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"Log2", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Numerics::BitOperations::Log2(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"Log2", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Numerics::BitOperations::Log2SoftwareFallback(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"Log2SoftwareFallback", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Numerics::BitOperations::PopCount(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"PopCount", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Numerics::BitOperations::PopCount(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"PopCount", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Numerics::BitOperations::TrailingZeroCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"TrailingZeroCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Numerics::BitOperations::TrailingZeroCount(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"TrailingZeroCount", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Numerics::BitOperations::TrailingZeroCount(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"TrailingZeroCount", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Numerics::BitOperations::TrailingZeroCount(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"TrailingZeroCount", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Numerics::BitOperations::RotateLeft(uint32_t  value, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"RotateLeft", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value, offset);
}
inline uint64_t System::Numerics::BitOperations::RotateLeft(uint64_t  value, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"RotateLeft", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value, offset);
}
inline uint32_t System::Numerics::BitOperations::RotateRight(uint32_t  value, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"RotateRight", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value, offset);
}
inline uint64_t System::Numerics::BitOperations::RotateRight(uint64_t  value, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Numerics::BitOperations*>(),
                        {"RotateRight", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value, offset);
}
// Ctor Parameters []
constexpr ::System::Numerics::BitOperations::BitOperations()   {
}
