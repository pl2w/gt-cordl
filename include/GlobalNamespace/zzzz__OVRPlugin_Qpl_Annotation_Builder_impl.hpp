#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Qpl_Annotation_Builder.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Qpl_Annotation_Builder_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Qpl_Annotation_Builder_Entry_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Qpl_Annotation_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Qpl_Variant_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::*)(::StringW)>(&::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Copy)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa61416c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Copy", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::*)()>(&::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::get_Count)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa614250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder (*)()>(&::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Create)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa61429c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder (::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::*)(::StringW, ::GlobalNamespace::Qpl_OVRPlugin_Variant)>(&::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa614330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::Qpl_OVRPlugin_Variant>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder (::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::*)(::StringW, ::StringW)>(&::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa614444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder (::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::*)(::StringW, uint8_t*)>(&::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa614480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder (::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::*)(::StringW, int64_t)>(&::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa61448c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder (::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::*)(::StringW, double_t)>(&::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa614498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder (::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::*)(::StringW, bool)>(&::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa6144a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder (::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::*)(::StringW, uint8_t*, int32_t)>(&::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6144b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder (::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::*)(::StringW, int64_t*, int32_t)>(&::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6144c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder (::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::*)(::StringW, double_t*, int32_t)>(&::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6144d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder (::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::*)(::StringW, ::GlobalNamespace::OVRPlugin_Bool*, int32_t)>(&::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa6144ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Bool*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder.ToNativeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::GlobalNamespace::Qpl_OVRPlugin_Annotation> (::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::*)(::Unity::Collections::Allocator)>(&::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::ToNativeArray)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xa614500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"ToNativeArray", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::*)()>(&::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Dispose)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xa614700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Copy(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Copy", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method, str);
}
inline int32_t GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add(::StringW  key, ::GlobalNamespace::Qpl_OVRPlugin_Variant  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::Qpl_OVRPlugin_Variant>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(*this, ___internal_method, key, value);
}
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add(::StringW  key, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(*this, ___internal_method, key, value);
}
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add(::StringW  key, uint8_t*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(*this, ___internal_method, key, value);
}
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add(::StringW  key, int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(*this, ___internal_method, key, value);
}
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add(::StringW  key, double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(*this, ___internal_method, key, value);
}
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add(::StringW  key, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(*this, ___internal_method, key, value);
}
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add(::StringW  key, uint8_t*  value, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(*this, ___internal_method, key, value, count);
}
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add(::StringW  key, int64_t*  value, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(*this, ___internal_method, key, value, count);
}
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add(::StringW  key, double_t*  value, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(*this, ___internal_method, key, value, count);
}
inline ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Add(::StringW  key, ::GlobalNamespace::OVRPlugin_Bool*  value, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Bool*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(*this, ___internal_method, key, value, count);
}
inline ::Unity::Collections::NativeArray_1<::GlobalNamespace::Qpl_OVRPlugin_Annotation> GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::ToNativeArray(::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"ToNativeArray", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::GlobalNamespace::Qpl_OVRPlugin_Annotation>>(*this, ___internal_method, allocator);
}
inline void GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_entries", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::Builder_Annotation_Qpl_OVRPlugin_Entry>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ownedStrings", ty: "::System::Collections::Generic::List_1<::System::IntPtr>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Annotation_Qpl_OVRPlugin_Builder(::System::Collections::Generic::List_1<::GlobalNamespace::Builder_Annotation_Qpl_OVRPlugin_Entry>*  _entries, ::System::Collections::Generic::List_1<::System::IntPtr>*  _ownedStrings) noexcept  {
this->_entries = _entries;
this->_ownedStrings = _ownedStrings;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Annotation_Qpl_OVRPlugin_Builder::Annotation_Qpl_OVRPlugin_Builder()   {
}
