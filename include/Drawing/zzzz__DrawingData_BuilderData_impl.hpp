#pragma once
// IWYU pragma private; include "Drawing/DrawingData_BuilderData.hpp"
#include "Drawing/zzzz__AllowedDelay_impl.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_BitPackedMeta_impl.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_Meta_impl.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_State_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_def.hpp"
#include "Drawing/zzzz__AllowedDelay_def.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_BitPackedMeta_def.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_Meta_def.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_State_def.hpp"
#include "Drawing/zzzz__DrawingData_Hasher_def.hpp"
#include "Drawing/zzzz__DrawingData_SubmittedMesh_def.hpp"
#include "Drawing/zzzz__DrawingData_def.hpp"
#include "Drawing/zzzz__RedrawScope_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderData.get_state
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BuilderData_DrawingData_State (::GlobalNamespace::DrawingData_BuilderData::*)()>(&::GlobalNamespace::DrawingData_BuilderData::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55d00b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"get_state", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderData.set_state
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_BuilderData::*)(::GlobalNamespace::BuilderData_DrawingData_State)>(&::GlobalNamespace::DrawingData_BuilderData::set_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55d00bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"set_state", {}, {::i2c::type_of<::GlobalNamespace::BuilderData_DrawingData_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderData.Reserve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_BuilderData::*)(int32_t, bool)>(&::GlobalNamespace::DrawingData_BuilderData::Reserve)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x55d00c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"Reserve", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderData.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_BuilderData::*)(::GlobalNamespace::DrawingData_Hasher, ::Drawing::RedrawScope, ::Drawing::RedrawScope, bool, int32_t, int32_t)>(&::GlobalNamespace::DrawingData_BuilderData::Init)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x55d0224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>(), ::i2c::type_of<::Drawing::RedrawScope>(), ::i2c::type_of<::Drawing::RedrawScope>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderData.get_bufferPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer* (::GlobalNamespace::DrawingData_BuilderData::*)()>(&::GlobalNamespace::DrawingData_BuilderData::get_bufferPtr)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x55d04a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"get_bufferPtr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderData.AnyBuffersWrittenTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*, int32_t)>(&::GlobalNamespace::DrawingData_BuilderData::AnyBuffersWrittenTo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55d00ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"AnyBuffersWrittenTo", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderData.ResetAllBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*, int32_t)>(&::GlobalNamespace::DrawingData_BuilderData::ResetAllBuffers)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55d00b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"ResetAllBuffers", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderData.SubmitWithDependency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_BuilderData::*)(::System::Runtime::InteropServices::GCHandle, ::Unity::Jobs::JobHandle, ::Drawing::AllowedDelay)>(&::GlobalNamespace::DrawingData_BuilderData::SubmitWithDependency)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x55d06c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"SubmitWithDependency", {}, {::i2c::type_of<::System::Runtime::InteropServices::GCHandle>(), ::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Drawing::AllowedDelay>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderData.Submit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_BuilderData::*)(::Drawing::DrawingData*)>(&::GlobalNamespace::DrawingData_BuilderData::Submit)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x55d0748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"Submit", {}, {::i2c::type_of<::Drawing::DrawingData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderData.CheckJobDependency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_BuilderData::*)(::Drawing::DrawingData*, bool)>(&::GlobalNamespace::DrawingData_BuilderData::CheckJobDependency)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x55d1150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"CheckJobDependency", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderData.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_BuilderData::*)()>(&::GlobalNamespace::DrawingData_BuilderData::Release)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x55d0c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderData.ClearData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_BuilderData::*)()>(&::GlobalNamespace::DrawingData_BuilderData::ClearData)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55d1224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"ClearData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderData.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_BuilderData::*)()>(&::GlobalNamespace::DrawingData_BuilderData::Dispose)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x55d1318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderData.AnyBuffersWrittenTo$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*, int32_t)>(&::GlobalNamespace::DrawingData_BuilderData::AnyBuffersWrittenTo$BurstManaged)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x55d1830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"AnyBuffersWrittenTo$BurstManaged", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderData.ResetAllBuffers$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*, int32_t)>(&::GlobalNamespace::DrawingData_BuilderData::ResetAllBuffers$BurstManaged)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x55d187c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"ResetAllBuffers$BurstManaged", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DrawingData_BuilderData::setStaticF_UniqueIDCounter(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "UniqueIDCounter", ::GlobalNamespace::DrawingData_BuilderData>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::DrawingData_BuilderData::getStaticF_UniqueIDCounter()  {
return ::cordl_internals::getStaticField<int32_t, "UniqueIDCounter", ::GlobalNamespace::DrawingData_BuilderData>();
}
inline void GlobalNamespace::DrawingData_BuilderData::setStaticF_AnyBuffersWrittenToInvoke(::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*  value)  {
::cordl_internals::setStaticField<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*, "AnyBuffersWrittenToInvoke", ::GlobalNamespace::DrawingData_BuilderData>(std::forward<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*>(value));
}
inline ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate* GlobalNamespace::DrawingData_BuilderData::getStaticF_AnyBuffersWrittenToInvoke()  {
return ::cordl_internals::getStaticField<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*, "AnyBuffersWrittenToInvoke", ::GlobalNamespace::DrawingData_BuilderData>();
}
inline void GlobalNamespace::DrawingData_BuilderData::setStaticF_ResetAllBuffersToInvoke(::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*  value)  {
::cordl_internals::setStaticField<::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*, "ResetAllBuffersToInvoke", ::GlobalNamespace::DrawingData_BuilderData>(std::forward<::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*>(value));
}
inline ::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate* GlobalNamespace::DrawingData_BuilderData::getStaticF_ResetAllBuffersToInvoke()  {
return ::cordl_internals::getStaticField<::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*, "ResetAllBuffersToInvoke", ::GlobalNamespace::DrawingData_BuilderData>();
}
inline ::GlobalNamespace::BuilderData_DrawingData_State GlobalNamespace::DrawingData_BuilderData::get_state()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"get_state", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BuilderData_DrawingData_State>(*this, ___internal_method);
}
inline void GlobalNamespace::DrawingData_BuilderData::set_state(::GlobalNamespace::BuilderData_DrawingData_State  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"set_state", {}, {::i2c::type_of<::GlobalNamespace::BuilderData_DrawingData_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::DrawingData_BuilderData::Reserve(int32_t  dataIndex, bool  isBuiltInCommandBuilder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"Reserve", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dataIndex, isBuiltInCommandBuilder);
}
inline void GlobalNamespace::DrawingData_BuilderData::Init(::GlobalNamespace::DrawingData_Hasher  hasher, ::Drawing::RedrawScope  frameRedrawScope, ::Drawing::RedrawScope  customRedrawScope, bool  isGizmos, int32_t  drawOrderIndex, int32_t  sceneModeVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>(), ::i2c::type_of<::Drawing::RedrawScope>(), ::i2c::type_of<::Drawing::RedrawScope>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hasher, frameRedrawScope, customRedrawScope, isGizmos, drawOrderIndex, sceneModeVersion);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer* GlobalNamespace::DrawingData_BuilderData::get_bufferPtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"get_bufferPtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*>(*this, ___internal_method);
}
inline bool GlobalNamespace::DrawingData_BuilderData::AnyBuffersWrittenTo(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"AnyBuffersWrittenTo", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffers, numBuffers);
}
inline void GlobalNamespace::DrawingData_BuilderData::ResetAllBuffers(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"ResetAllBuffers", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffers, numBuffers);
}
inline void GlobalNamespace::DrawingData_BuilderData::SubmitWithDependency(::System::Runtime::InteropServices::GCHandle  gcHandle, ::Unity::Jobs::JobHandle  dependency, ::Drawing::AllowedDelay  allowedDelay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"SubmitWithDependency", {}, {::i2c::type_of<::System::Runtime::InteropServices::GCHandle>(), ::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Drawing::AllowedDelay>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gcHandle, dependency, allowedDelay);
}
inline void GlobalNamespace::DrawingData_BuilderData::Submit(::Drawing::DrawingData*  gizmos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"Submit", {}, {::i2c::type_of<::Drawing::DrawingData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gizmos);
}
inline void GlobalNamespace::DrawingData_BuilderData::CheckJobDependency(::Drawing::DrawingData*  gizmos, bool  allowBlocking)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"CheckJobDependency", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gizmos, allowBlocking);
}
inline void GlobalNamespace::DrawingData_BuilderData::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::DrawingData_BuilderData::ClearData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"ClearData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::DrawingData_BuilderData::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool GlobalNamespace::DrawingData_BuilderData::AnyBuffersWrittenTo$BurstManaged(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"AnyBuffersWrittenTo$BurstManaged", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffers, numBuffers);
}
inline void GlobalNamespace::DrawingData_BuilderData::ResetAllBuffers$BurstManaged(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderData>(),
                        {"ResetAllBuffers$BurstManaged", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffers, numBuffers);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::DrawingData_BuilderData::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::DrawingData_BuilderData::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "packedMeta", ty: "::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshes", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_SubmittedMesh>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "commandBuffers", ty: "::Unity::Collections::NativeArray_1<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_state_k__BackingField", ty: "::GlobalNamespace::BuilderData_DrawingData_State", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "preventDispose", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "splitterJob", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "disposeDependency", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "disposeDependencyDelay", ty: "::Drawing::AllowedDelay", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "disposeGCHandle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meta", ty: "::GlobalNamespace::BuilderData_DrawingData_Meta", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DrawingData_BuilderData::DrawingData_BuilderData(::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta  packedMeta, ::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_SubmittedMesh>*  meshes, ::Unity::Collections::NativeArray_1<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>  commandBuffers, ::GlobalNamespace::BuilderData_DrawingData_State  _state_k__BackingField, bool  preventDispose, ::Unity::Jobs::JobHandle  splitterJob, ::Unity::Jobs::JobHandle  disposeDependency, ::Drawing::AllowedDelay  disposeDependencyDelay, ::System::Runtime::InteropServices::GCHandle  disposeGCHandle, ::GlobalNamespace::BuilderData_DrawingData_Meta  meta) noexcept  {
this->packedMeta = packedMeta;
this->meshes = meshes;
this->commandBuffers = commandBuffers;
this->_state_k__BackingField = _state_k__BackingField;
this->preventDispose = preventDispose;
this->splitterJob = splitterJob;
this->disposeDependency = disposeDependency;
this->disposeDependencyDelay = disposeDependencyDelay;
this->disposeGCHandle = disposeGCHandle;
this->meta = meta;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrawingData_BuilderData::DrawingData_BuilderData()   {
}
