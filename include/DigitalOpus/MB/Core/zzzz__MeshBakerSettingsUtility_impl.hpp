#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MeshBakerSettingsUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MeshBakerSettingsUtility_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_IMeshBakerSettings_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshVertexChannelFlags_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MeshBakerSettingsUtility.GetMeshChannelsAsFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags (*)(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, bool, bool)>(&::DigitalOpus::MB::Core::MeshBakerSettingsUtility::GetMeshChannelsAsFlags)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0x9dbd9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerSettingsUtility*>(),
                        {"GetMeshChannelsAsFlags", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MeshBakerSettingsUtility.DoUV2getDataFromSourceMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>)>(&::DigitalOpus::MB::Core::MeshBakerSettingsUtility::DoUV2getDataFromSourceMeshes)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x9dbdfcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerSettingsUtility*>(),
                        {"DoUV2getDataFromSourceMeshes", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags DigitalOpus::MB::Core::MeshBakerSettingsUtility::GetMeshChannelsAsFlags(::DigitalOpus::MB::Core::MB_IMeshBakerSettings*  settings, bool  doVerts, bool  uvsSliceIdx_w)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerSettingsUtility*>(),
                        {"GetMeshChannelsAsFlags", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_MeshVertexChannelFlags>(nullptr, ___internal_method, settings, doVerts, uvsSliceIdx_w);
}
inline bool DigitalOpus::MB::Core::MeshBakerSettingsUtility::DoUV2getDataFromSourceMeshes(::by_ref<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MeshBakerSettingsUtility*>(),
                        {"DoUV2getDataFromSourceMeshes", {}, {::i2c::type_of<::by_ref<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, settings);
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MeshBakerSettingsUtility::MeshBakerSettingsUtility()   {
}
