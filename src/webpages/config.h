const char HTML_CONFIG_EDIT[] PROGMEM = R"rawliteral(
<figure class="text-center"><h1>Configuration inverter</h1></figure>
<form method="POST" action="/configsave" enctype="multipart/form-data">
<div class="input-group mb-2">
<span class="input-group-text w-50" id="maxchargedesc">maxcharge</span>
<input type="text" class="form-control" aria-describedby="maxchargedesc" id="maxcharge" name="post_maxcharge" value="">
</div>
<div class="input-group mb-3">
<span class="input-group-text w-50" id="maxacchargedesc">maxaccharge</span>
<input type="text" class="form-control" aria-describedby="maxacchargedesc" id="maxaccharge" name="post_maxaccharge" value="">
</div>
<div class="input-group mb-2">
<span class="input-group-text w-50" id="PCVV_battBulkVdesc">battBulkV</span>
<input type="text" class="form-control" aria-describedby="PCVV_battBulkVdesc" id="PCVV_battBulkV" name="post_PCVV_battBulkV" value="">
</div>
<div class="input-group mb-2">
<span class="input-group-text w-50" id="PBFT_battFloatVdesc">battFloatV</span>
<input type="text" class="form-control" aria-describedby="PBFT_battFloatVdesc" id="PBFT_battFloatV" name="post_PBFT_battFloatV" value="">
</div>
<div class="input-group mb-2">
<span class="input-group-text w-50" id="ReChargeV_battReChargeVdesc">battReChargeV</span>
<input type="text" class="form-control" aria-describedby="ReChargeV_battReChargeVdesc" id="ReChargeV_battReChargeV" name="post_ReChargeV_battReChargeV" value="">
</div>
<div class="input-group mb-2">
<span class="input-group-text w-50" id="UnderV_battUnderVdesc">battUnderV</span>
<input type="text" class="form-control" aria-describedby="UnderV_battUnderVdesc" id="UnderV_battUnderV" name="post_UnderV_battUnderV" value="">
</div>

<div class="d-grid gap-2">
<input class="btn btn-warning" type="submit" value="Save config">
</form>
<a class="btn btn-primary" href="/settings" role="button">Back</a>
</div><script>
        $(document).ready(function(load) {
        $.ajax({
            url: "configjson",
            data: {},
            type: "get",
            dataType: "json",
               cache: false,
                success: function (data) {
               document.getElementById("maxcharge").value = data.maxcharge;
               document.getElementById("maxaccharge").value = data.maxaccharge;
               document.getElementById("PCVV_battBulkV").value = data.PCVV;
               document.getElementById("PBFT_battFloatV").value = data.PBFT;
               document.getElementById("ReChargeV_battReChargeV").value = data.ReChargeV;
               document.getElementById("UnderV_battUnderV").value = data.UnderV;
            }
        });
        });
</script>
)rawliteral";