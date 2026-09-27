#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTableJobs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderTableJobs_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderGridPlaneData_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderPieceData_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableJobs.BuildTestPieceListForJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BuilderPiece*, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>)>(&::GorillaTagScripts::BuilderTableJobs::BuildTestPieceListForJob)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5baad78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableJobs*>(),
                        {"BuildTestPieceListForJob", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableJobs.BuildTestPieceListForJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BuilderPiece*, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>)>(&::GorillaTagScripts::BuilderTableJobs::BuildTestPieceListForJob)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5baaf8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableJobs*>(),
                        {"BuildTestPieceListForJob", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderTableJobs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderTableJobs::*)()>(&::GorillaTagScripts::BuilderTableJobs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bab10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableJobs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::BuilderTableJobs::BuildTestPieceListForJob(::GlobalNamespace::BuilderPiece*  testPiece, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>  testPieceList, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  testGridPlaneList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableJobs*>(),
                        {"BuildTestPieceListForJob", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, testPiece, testPieceList, testGridPlaneList);
}
inline void GorillaTagScripts::BuilderTableJobs::BuildTestPieceListForJob(::GlobalNamespace::BuilderPiece*  testPiece, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  testGridPlaneList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableJobs*>(),
                        {"BuildTestPieceListForJob", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, testPiece, testGridPlaneList);
}
inline void GorillaTagScripts::BuilderTableJobs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderTableJobs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::BuilderTableJobs* GorillaTagScripts::BuilderTableJobs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::BuilderTableJobs*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderTableJobs::BuilderTableJobs()   {
}
