#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/GraphicsStateCollection.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsStateCollection_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsDeviceType_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsStateCollection.BeginTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::GraphicsStateCollection::*)()>(&::UnityEngine::Experimental::Rendering::GraphicsStateCollection::BeginTrace)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb62f614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"BeginTrace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsStateCollection.EndTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::GraphicsStateCollection::*)()>(&::UnityEngine::Experimental::Rendering::GraphicsStateCollection::EndTrace)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb62f6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"EndTrace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsStateCollection.get_graphicsDeviceType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GraphicsDeviceType (::UnityEngine::Experimental::Rendering::GraphicsStateCollection::*)()>(&::UnityEngine::Experimental::Rendering::GraphicsStateCollection::get_graphicsDeviceType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb62f77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"get_graphicsDeviceType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsStateCollection.get_runtimePlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RuntimePlatform (::UnityEngine::Experimental::Rendering::GraphicsStateCollection::*)()>(&::UnityEngine::Experimental::Rendering::GraphicsStateCollection::get_runtimePlatform)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb62f830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"get_runtimePlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsStateCollection.get_qualityLevelName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Experimental::Rendering::GraphicsStateCollection::*)()>(&::UnityEngine::Experimental::Rendering::GraphicsStateCollection::get_qualityLevelName)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb62f8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"get_qualityLevelName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsStateCollection.SendToEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::GraphicsStateCollection::*)(::StringW)>(&::UnityEngine::Experimental::Rendering::GraphicsStateCollection::SendToEditor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xb62fa54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"SendToEditor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsStateCollection.WarmUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Experimental::Rendering::GraphicsStateCollection::*)(::Unity::Jobs::JobHandle)>(&::UnityEngine::Experimental::Rendering::GraphicsStateCollection::WarmUp)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb62fc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"WarmUp", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsStateCollection.get_totalGraphicsStateCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::GraphicsStateCollection::*)()>(&::UnityEngine::Experimental::Rendering::GraphicsStateCollection::get_totalGraphicsStateCount)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb62fd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"get_totalGraphicsStateCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsStateCollection.Internal_Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::GraphicsStateCollection*)>(&::UnityEngine::Experimental::Rendering::GraphicsStateCollection::Internal_Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb62fde4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"Internal_Create", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsStateCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::GraphicsStateCollection::*)()>(&::UnityEngine::Experimental::Rendering::GraphicsStateCollection::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb62fe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsStateCollection.BeginTrace_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Experimental::Rendering::GraphicsStateCollection::BeginTrace_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb62f68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"BeginTrace_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsStateCollection.EndTrace_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Experimental::Rendering::GraphicsStateCollection::EndTrace_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb62f740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"EndTrace_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsStateCollection.get_graphicsDeviceType_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GraphicsDeviceType (*)(::System::IntPtr)>(&::UnityEngine::Experimental::Rendering::GraphicsStateCollection::get_graphicsDeviceType_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb62f7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"get_graphicsDeviceType_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsStateCollection.get_runtimePlatform_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RuntimePlatform (*)(::System::IntPtr)>(&::UnityEngine::Experimental::Rendering::GraphicsStateCollection::get_runtimePlatform_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb62f8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"get_runtimePlatform_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsStateCollection.get_qualityLevelName_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Experimental::Rendering::GraphicsStateCollection::get_qualityLevelName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb62fa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"get_qualityLevelName_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsStateCollection.SendToEditor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Experimental::Rendering::GraphicsStateCollection::SendToEditor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb62fc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"SendToEditor_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsStateCollection.WarmUp_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Unity::Jobs::JobHandle>, ::by_ref<::Unity::Jobs::JobHandle>)>(&::UnityEngine::Experimental::Rendering::GraphicsStateCollection::WarmUp_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb62fcdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"WarmUp_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::GraphicsStateCollection.get_totalGraphicsStateCount_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Experimental::Rendering::GraphicsStateCollection::get_totalGraphicsStateCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb62fda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"get_totalGraphicsStateCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Experimental::Rendering::GraphicsStateCollection::BeginTrace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"BeginTrace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::GraphicsStateCollection::EndTrace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"EndTrace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::GraphicsDeviceType UnityEngine::Experimental::Rendering::GraphicsStateCollection::get_graphicsDeviceType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"get_graphicsDeviceType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GraphicsDeviceType>(this, ___internal_method);
}
inline ::UnityEngine::RuntimePlatform UnityEngine::Experimental::Rendering::GraphicsStateCollection::get_runtimePlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"get_runtimePlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RuntimePlatform>(this, ___internal_method);
}
inline ::StringW UnityEngine::Experimental::Rendering::GraphicsStateCollection::get_qualityLevelName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"get_qualityLevelName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::GraphicsStateCollection::SendToEditor(::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"SendToEditor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fileName);
}
inline ::Unity::Jobs::JobHandle UnityEngine::Experimental::Rendering::GraphicsStateCollection::WarmUp(::Unity::Jobs::JobHandle  dependency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"WarmUp", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, dependency);
}
inline int32_t UnityEngine::Experimental::Rendering::GraphicsStateCollection::get_totalGraphicsStateCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"get_totalGraphicsStateCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::GraphicsStateCollection::Internal_Create(/* [Writable] */ ::UnityEngine::Experimental::Rendering::GraphicsStateCollection*  gsc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"Internal_Create", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gsc);
}
inline void UnityEngine::Experimental::Rendering::GraphicsStateCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::GraphicsStateCollection::BeginTrace_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"BeginTrace_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Experimental::Rendering::GraphicsStateCollection::EndTrace_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"EndTrace_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Rendering::GraphicsDeviceType UnityEngine::Experimental::Rendering::GraphicsStateCollection::get_graphicsDeviceType_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"get_graphicsDeviceType_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GraphicsDeviceType>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::RuntimePlatform UnityEngine::Experimental::Rendering::GraphicsStateCollection::get_runtimePlatform_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"get_runtimePlatform_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RuntimePlatform>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Experimental::Rendering::GraphicsStateCollection::get_qualityLevelName_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"get_qualityLevelName_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline bool UnityEngine::Experimental::Rendering::GraphicsStateCollection::SendToEditor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"SendToEditor_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, fileName);
}
inline void UnityEngine::Experimental::Rendering::GraphicsStateCollection::WarmUp_Injected(::System::IntPtr  _unity_self, ::by_ref<::Unity::Jobs::JobHandle>  dependency, ::by_ref<::Unity::Jobs::JobHandle>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"WarmUp_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, dependency, ret);
}
inline int32_t UnityEngine::Experimental::Rendering::GraphicsStateCollection::get_totalGraphicsStateCount_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>(),
                        {"get_totalGraphicsStateCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsStateCollection* UnityEngine::Experimental::Rendering::GraphicsStateCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Experimental::Rendering::GraphicsStateCollection*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::GraphicsStateCollection::GraphicsStateCollection()   {
}
